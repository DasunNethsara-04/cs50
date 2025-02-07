#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int numbers[] = {70, 45, 80, 64, 55, 78, 42};

    int n = get_int("Number: ");

    for (int i = 0; i < 7; i++)
    {
        if (n == numbers[i])
        {
            printf("Found %i\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}
