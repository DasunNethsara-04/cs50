#include <stdio.h>
#include <cs50.h>

void makeBrickBlock(int d1, int d2);

int main(void) {
    int x = get_int("Size for X axis: ");
    int y = get_int("Size for Y axis: ");
    makeBrickBlock(x, y);
}

void makeBrickBlock(int d1, int d2) {
    for(int i=0; i<d2; i++) {
        for(int j=0; j<d1; j++) {
            printf("#");
        }
        printf("\n");
    }
}
