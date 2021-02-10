#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL;

void insert(int val)
{
    struct node *new1, *curr;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;

    if (first == NULL)
    {
        first = new1;
        return;
    }

    curr = first;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new1;
}

void display()
{
    struct node *curr;

    if (first == NULL)
    {
        printf("\n\n\t\t Your queue is empty.....");
        return;
    }

    curr = first;
    printf("\n\n\t\t");

    while (curr->next != NULL)
    {
        printf(" %d", curr->data);
        curr = curr->next;
    }
    printf(" %d", curr->data);
}

void free_queue()
{
    struct node *curr;

    if(first==NULL)
    {
        printf("\n\n\t\t Your queue is empty.....");
        return;
    }

    curr=first;

    first=curr->next;

    printf("\n\n\t\t %d value is removed....",curr->data);
    free(curr);

}
void main()
{
    int val, ch;
    do
    {
        printf("\n\n |--------------------------------|");
        printf("\n\n 1. Insert value in a queue ");
        printf("\n\n 2. Display ");
        printf("\n\n 3. Free value in queue ");
        printf("\n\n 4. Exit");
        printf("\n\n |--------------------------------|");

        printf("\n\n\t Enter Your choice : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n\n\t\t Enter your value : ");
            scanf("%d", &val);

            insert(val);
        }
        else if (ch == 2)
        {
            display();
        }
        else if (ch == 3)
        {
            free_queue();
        }
        else if (ch == 4)
        {
            printf("\n\n\t\t Meet Soon....");
        }
    } while (ch != 4);
}