#include <stdio.h>

int main(void) {
    int scores[3];

    scores[0] = 45;
    scores[1] = 71;
    scores[2] = 49;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
