#include <cs50.h>
#include <stdio.h>

// prototype
float countAverage(int length, int arr[]);

int main(void)
{
    int arrLength;
    do
    {
        arrLength = get_int("Subject Count: ");
    }
    while (arrLength < 1);

    int scores[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        scores[i] = get_int("Score: ");
    }

    float avg = countAverage(arrLength, scores);
    printf("Average: %f\n", avg);
}

float countAverage(int length, int arr[])
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += arr[i];
    }
    return total / (float) length;
}
