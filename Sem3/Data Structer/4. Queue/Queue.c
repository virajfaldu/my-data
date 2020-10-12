#include <stdio.h>

int f = -1, r = -1;
int q[5];

void set_value(int val)
{

    if ((r + 1) % 5 == f)
    {
        printf("\n\n\t Your queue is overflow.......");
        return;
    }

    else
    {
        r++;
        q[r] = val;

        if (f == -1)
        {
            f++;
        }
    }
}

void free_queue()
{
    if (q[f] == '\0')
    {
        printf("\n\n\t queue unloaded right now");
        return;
    }

    else
    {
        q[f] = '\0';
        f++;
    }
}

void display()
{
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
        printf("\n\n|-----------------------------------|");
        printf("\n\n 1. Enter a value in a Queue ");
        printf("\n\n 2. Free your Queue's value ");
        printf("\n\n 3. Display");
        printf("\n\n 4. Exit");
        printf("\n\n|-----------------------------------|");
        printf("\n\n Enter Your Choice : ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n\n\t Enter Your Value : ");
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
    } while (ch != 4);
}
