#include <cs50.h>
#include <stdio.h>

int main(void) {
    char choice = get_char("Do you agree?: ");

    if(choice == 'y' || choice == 'Y') {
        printf("Agreed\n");
    } else if(choice == 'n' || choice == 'N') {
        printf("Disagreed\n");
    }
}
