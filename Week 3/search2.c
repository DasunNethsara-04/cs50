#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"Amal", "Kamal", "Nimal", "Sunil", "Kasun"};

    string name = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], name) == 0)
        {
            printf("Found: %s\n", strings[i]);
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}
