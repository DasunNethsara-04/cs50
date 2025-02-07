#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Amal", "Kamal", "Nimal", "Sunil"};
    string nums[] = {"123456789", "789456123", "456789123", "741852963"};

    string name = get_string("Name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found: %s -> %s\n", names[i], nums[i]);
            return 0;
        }
    }
    printf("Not Found!");
    return 1;
}
