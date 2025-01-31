#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prototypes
bool check_digit(string arg);
char rotate(char c, int pos);

// main function that accpets command-line arguments
int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2 || !check_digit(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    // propmpt the user to enter the plaintext
    string plaintext = get_string("Plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    // printf("ciphertext: %s\n", ciphertext);
}

// checks the second argument contains non-digit values
bool check_digit(string arg)
{
    bool flag = false;
    for (int i = 0, len = strlen(arg); i < len; i++)
    {
        if (!isdigit(arg[i]))
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
    }
    return flag;
}

// rotates that char by how many positions given
char rotate(char c, int pos)
{
    // formular to rotate the character
    // c(i) = (p(i) + k) % 26
    // i = iteration
    // c = character
    // p = plaintext
    // k = key

    // in this case this function is calling in a loop so, we don't need (i). So,
    // c = rotated character
    // p = input character should rorate
    // k = key

    char rotated;

    // check if the character is a special character or punctuation mark, if it is, return as it is.
    if (!isalpha(c))
    {
        return c;
    }

    // check the character is a uppercase or lowercase
    if (isupper(c))
    {
        rotated = (c - 65 + pos) % 26;
        return rotated + 65;
    }
    else
    {
        rotated = (c - 97 + pos) % 26;
        return rotated + 97;
    }
}
