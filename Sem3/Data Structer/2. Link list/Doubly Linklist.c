#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *first = NULL, *second = NULL;

void create_node(int no_node)
{
    struct node *new1, *curr, *tmp;
    int val;

    if (first != NULL)
    {
        printf("\n\t Link list is already exist...");
        return;
    }

    for (int i = 0; i < no_node; i++)
    {
        printf("\n\t\t\t Enter a value : ");
        scanf("%d", &val);

        if (first == NULL)
        {
            new1 = (struct node *)malloc(sizeof(struct node));
            new1->prev = NULL;
            new1->next = NULL;
            new1->data = val;
            first = new1;
            continue;
        }

        tmp = new1;
        new1->next = (struct node *)malloc(sizeof(struct node));
        new1 = new1->next;
        new1->prev = tmp;
        new1->next = NULL;
        new1->data = val;
    }
}

void display()
{

    struct node *curr;
    int val;

    if (second != NULL)
    {
        printf("\n\t which node your want to display : ");
        scanf("%d", &val);

        if (val == 1)
        {
            curr = first;
        }
        else
        {
            curr = second;
        }
    }
    else
    {
        curr = first;
    }

    printf("\n\n\t");
    while (curr->next != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("%d ", curr->data);
}

void insert_beg(int val)
{
    struct node *new1, *curr;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->prev = NULL;
    new1->next = NULL;
    new1->data = val;

    curr = first;

    new1->next = first;
    first = new1;
    curr->prev = new1;
}

void insert_end(int val)
{
    struct node *new1, *curr;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;
    new1->prev = NULL;

    curr = first;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new1;
}

void insert_after(int val, int key)
{
    struct node *curr, *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;
    new1->prev = NULL;

    if (first == NULL)
    {
        printf("\n Your linklist is empty..");
        return;
    }
    curr = first;

    while (curr->data != key && curr->next != NULL)
    {
        curr = curr->next;
    }
    if (curr->data != key)
    {
        printf("\n\t\t your key does not match...");
        return;
    }
    new1->next = curr->next;
    curr->next = new1;
}

void insert_before(int val, int key)
{
    struct node *curr, *new1, *tmp;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;
    new1->prev = NULL;
    curr = first;
    if (first->data == key)
    {
        new1->next = curr;
        curr->prev = new1;
        first = new1;
        return;
    }
    while (curr->data != key && curr->next != NULL)
    {
        curr = curr->next;
    }
    if (curr->data != key)
    {
        printf("\n\t\t your key does not match...");
        return;
    }
    new1->prev = curr->prev;
    curr->prev = new1;
    new1->next = curr;
    tmp = new1;
    new1 = new1->prev;
    new1->next = tmp;
}

void split(int val)
{
    struct node *curr;
    curr = first;
    if (curr->prev == NULL)
    {
        printf("\n\n\t\t You can not split this type of linklist...");
        return;
    }
    while (curr->data != val && curr != NULL)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("\n\n\t\t Your value does not exist in this linklist");
        return;
    }

    second = curr->next;
    curr->next = NULL;
    second->prev = NULL;
}

void join()
{
    struct node *curr;
    curr = first;

    if (second == NULL)
    {
        printf("\n\n\t\t Second linklist is not created...");
        return;
    }

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = second;
    curr = second->prev;
    second = NULL;
}

void sort_node()
{
    int tmp;
    struct node *i, *j;
    for (i = first; i != NULL; i = i->next)
    {
        for (j = i; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}
void count()
{
    struct node *curr;
    int c = 0, odd = 0, even = 0;
    curr = first;
    while (curr != NULL)
    {
        if (curr->data % 2 == 0)
        {
            even++;
        }
        if (curr->data % 2 != 0)
        {
            odd++;
        }
        c++;
        curr = curr->next;
    }
    printf("\n\t NUmber of node : %d ", c);
    printf("\n\t Odd number : %d ", odd);
    printf("\n\t Even number : %d", even);
}
void delete_node(int val)
{
    struct node *curr, *tmp;

    curr = first;

    while (curr->data != val && curr->next != NULL)
    {
        curr = curr->next;
    }
    if (curr->data != val)
    {
        printf("\n\t\t your key does not match...");
        return;
    }
    tmp = curr->next;
    curr = curr->prev;
    curr->next = tmp;
}
void delete_first()
{
    struct node *curr;

    first = first->next;
    first->prev = NULL;
}

void delete_last()
{

    struct node *curr;

    curr = first;

    while (curr->next != NULL)
        curr = curr->next;
    curr = curr->prev;
    curr->next = NULL;
}
/*
void reverse()
{
    struct node *curr,*tmp;

    if(first->next==NULL)
    {
        printf("\n\t\t You have only one node \n\t\t You must have two node");
        return;
    }
    curr=first;

    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    first=curr;
    if(first==curr)
    {
        tmp=curr->next;
        curr->next=curr->prev;
        curr->prev=tmp;
        curr=curr->next;
    }
    while(curr!=NULL)
    {
        tmp=curr->next;
        curr->next=curr->prev;
        curr->prev=tmp;
        curr=curr->next;
    }
}
*/
void reverse()
{

    struct node *curr, *last;
    int tmp;
    curr = last = first;
    while (last->next != NULL)
    {
        last = last->next;
    }

    while (curr != last)
    {
        tmp = curr->data;
        curr->data = last->data;
        last->data = tmp;
        curr = curr->next;
        last = last->prev;
    }
}
void main()
{

    int val, ch;
    int i = 0, key;
    do
    {
        printf("\n\n|------------------------------------|");
        printf("\n\n 1.  Insert linklist ");
        printf("\n\n 2.  Insert at begging ");
        printf("\n\n 3.  Insert at end ");
        printf("\n\n 4.  Insert after");
        printf("\n\n 5.  Insert before");
        printf("\n\n 6.  Split");
        printf("\n\n 7.  Join");
        printf("\n\n 8.  Display");
        printf("\n\n 9.  Sort");
        printf("\n\n 10. count");
        printf("\n\n 11. Delete");
        printf("\n\n 12. Delete first node");
        printf("\n\n 13. Delete last node");
        printf("\n\n 14. reverse");
        printf("\n\n 15. Exit");
        printf("\n\n|-------------------------------------|");
        printf("\n\n Enter your choice : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n\tHow many node you want : ");
            scanf("%d", &val);
            create_node(val);
            i++;
        }
        else if (i >= 1)
        {

            if (ch == 2)
            {
                printf("\n\tEnter your val : ");
                scanf("%d", &val);
                insert_beg(val);
            }
            else if (ch == 3)
            {
                printf("\n\tEnter your val : ");
                scanf("%d", &val);
                insert_end(val);
            }
            else if (ch == 4)
            {
                printf("\n\t Enter your value : ");
                scanf("%d", &val);
                printf("\n\t Enter your key : ");
                scanf("%d", &key);

                insert_after(val, key);
            }
            else if (ch == 5)
            {
                printf("\n\tEnter your value : ");
                scanf("%d", &val);
                printf("\n\t Enter your key : ");
                scanf("%d", &key);

                insert_before(val, key);
            }
            else if (ch == 6)
            {
                printf("\n\t Enter your value : ");
                scanf("%d", &val);

                split(val);
            }
            else if (ch == 7)
            {
                join();
            }
            else if (ch == 8)
            {
                display();
            }
            else if (ch == 9)
            {
                sort_node();
            }
            else if (ch == 10)
            {
                count();
            }
            else if (ch == 11)
            {
                printf("\n\t which value you are want to delete : ");
                scanf("%d", &val);
                delete_node(val);
            }
            else if (ch == 12)
            {
                delete_first();
            }
            else if (ch == 13)
            {
                delete_last();
            }
            else if (ch == 14)
            {
                reverse();
            }
            else if (ch == 15)
            {
                printf("\n\n\t\t MEET SOON.....\n\n");
            }
            else
                printf("\n\t incorrect value...");
        }
        else
        {
            printf("\n\n\t\t First insert linklist....");
        }
    } while (ch != 15);
}
