#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// prototypes
int countLetters(string text);
int countWords(string text);
int countSentenses(string text);
float calculateIndex(float L, float S);

// main function
int main(void)
{
    // get the user input
    string text = get_string("Text: ");

    int letters = countLetters(text);
    int words = countWords(text);
    int sentenses = countSentenses(text);

    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentenses / (float) words) * 100;

    float index = calculateIndex(L, S);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

// calculates the letter count of the given text/string
int countLetters(string text)
{
    int letterCount = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letterCount++;
        }
    }
    return letterCount;
}

// calculates the word count of the given text/string
int countWords(string text)
{
    int wordCount = 0;
    int spaceCount = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            spaceCount++;
        }
    }
    wordCount = spaceCount + 1;
    return wordCount;
}

// calculates the sentense count of the given text/string
int countSentenses(string text)
{
    int sentenseCount = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentenseCount++;
        }
    }
    return sentenseCount;
}

// calculates The Coleman-Liau index
float calculateIndex(float L, float S)
{
    // this is the formular to find the index of the reading level
    // index = 0.0588 * L - 0.296 * S - 15.8
    // L = average number of letters per 100 words
    // S = average number of sentenses per 100 words

    float index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}
