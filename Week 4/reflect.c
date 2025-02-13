#include <stdio.h>
void swap(int *a, int *b);

int main(void)
{
    int arr[] = {1, 7, 5, 9, 2, 4, 3};
    // reflect the array like an image
    for (int i = 0; i < 7 / 2; i++)
    {
        swap(&arr[i], &arr[6 - i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}