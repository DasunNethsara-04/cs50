#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void) {
    string name = get_string("Name: ");

    for(int i=0, len=strlen(name); i<len; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
}
