#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// constants
const char alpaArr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int points[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// prototypes
int calculateScore(string word);

// main function
int main(void)
{
    // Prompt for the user for two words
    string player1Input = get_string("Player 1: ");
    int player1Score = calculateScore(player1Input);

    string player2Input = get_string("Player 2: ");
    int player2Score = calculateScore(player2Input);

    if (player1Score == player2Score)
    {
        printf("Tie\n");
    }
    else if (player1Score > player2Score)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

int calculateScore(string word)
{
    char c;
    int total = 0;
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]) || islower(word[i]))
        {
            c = toupper(word[i]);

            int j = 0;
            while (alpaArr[j] != c)
            {
                j++;
            }
            total += points[j];
        }
    }

    return total;
}
