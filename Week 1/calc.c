#include <cs50.h>
#include <stdio.h>

int main(void) {
    int num1 = get_int("Enter Number 1: ");
    int num2 = get_int("Enter Number 2: ");

    double ans = (double) num1 / (double) num2;

    printf("%.20f\n", ans);
}
