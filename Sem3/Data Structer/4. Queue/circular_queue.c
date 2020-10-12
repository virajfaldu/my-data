#include <stdio.h>

int f = -1, r = -1;
int q[5];

void set_value(int val)
{
    if ((r + 1) % 5 == f)
    {
        printf("\n\n\t\t Your queue is overflow.......");
        return;
    }

    if (r == 4)
    {
        r = -1;
    }

    if (f == -1)
    {
        f++;
    }

    r++;
    q[r] = val;
}

void free_queue()
{
    
    if (f == -1)
    {
        printf("\n\n\t\t Your queue is unloaded.......");
        return;
    }
    if(r-f==-1)
    {
        printf("\n\n\t\t Your queue is unloaded.......");
        return;
    }
    if (f == 5)
    {
        f = 0;
    }

    printf("\n\n\t\t Your %d value removed...", q[f]);
    q[f] = '\0';
    f++;
}

void display()
{
    printf("\n\n\t\t");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", q[i]);
    }
}

int main()
{
    int ch, val;

    do
    {
        printf("\n\n |--------------------------------|");
        printf("\n\n 1. Enter your value in queue ");
        printf("\n\n 2. Remove a value from queue ");
        printf("\n\n 3. Display");
        printf("\n\n 4. Exit");
        printf("\n\n |--------------------------------|");

        printf("\n\n\t Enter Your Choice : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n\n\t\t Enter Your Value : ");
            scanf("%d", &val);

            set_value(val);
        }
        else if (ch == 2)
        {
            free_queue();
        }
        else if (ch == 3)
        {
            display();
        }
        else if(ch==4)
        {
            printf("\n\n\t\t Meet Soon.....\n\n");
        }

    } while (ch != 4);
}