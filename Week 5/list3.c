#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// custom data type to represent a node
typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // TODO: free up any nenory already malloc'd
            return 1;
        }

        // get the input from the user to store in the number
        n->number = get_int("Number: ");
        n->next = NULL;

        // if the list is empty
        if (list == NULL)
        {
            list = n;
        }

        // if the list already has values
        else
        {
            // go to the end of the list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // print those values
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // free the memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}
