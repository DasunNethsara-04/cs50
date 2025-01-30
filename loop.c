#include <stdio.h>

void speak(int n);

int main(void) {
    speak(10);
}


void speak(int n) {
    for(int i = 0; i < n; i++) {
        printf("Hello\n");
    }
}
