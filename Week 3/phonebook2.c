#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[4];

    people[0].name = "Amal";
    people[0].number = "123456789";

    people[1].name = "Kamal";
    people[1].number = "789456123";

    people[2].name = "Nimal";
    people[2].number = "456789123";

    people[3].name = "Nimal";
    people[3].number = "741852963";

    string name = get_string("Name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found: %s -> %s\n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not Found!");
    return 1;
}
