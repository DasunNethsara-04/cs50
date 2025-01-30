#include <cs50.h>
#include <stdio.h>

void printBrickRow(int spaces, int bricks);

int main(void)
{
    // prompt the user to enter the height for the pyramid
    int height;
    do
    {
        height = get_int("Enter the pyramid's height: ");
    }
    while (height < 1 || height > 8);

    // print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        printBrickRow(height - i - 1, i + 1);
    }
}

void printBrickRow(int spaces, int bricks)
{

    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }

    printf("\n");
}
