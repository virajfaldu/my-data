
//    Program of conversion of infix to postfix......

#include <stdio.h>

int top1 = -1; // position of first stack
char sk1[30];  // stack for save value from user
char sk3[30];  // stack for add expression
int top2 = -1; // position of second stack
char sk2[30];  // Stack for get answer 
int top3 = -1; // postiton of last stack

// for push value in the first stack .....
void push(char val[])
{
    char ele;
    
    for(int i=0;val[i]!='\0';i++)
    {
        top1++;
        sk1[top1]=val[i];
    }
}
// Get priority for expression.....
int priority(char val)
{
    if (val == '+')
        return 1;
    else if (val == '-')
        return 2;
    else if (val == '*')
        return 3;
    else if (val == '/')
        return 4;
}
// The main part of the programe
int main()
{
    int ch;
    int a;

    // GET VALUE FROM USER ...
    char str[30];

    printf("\n Enter Any Infix Value: ");
    scanf("%s", str);

    push(str);

    // SET ')' IN LAST OF MAIN STACK

    top1++;
    sk1[top1] = ')';

    // SET '(' IN STARTING POINT OF POSTFIT STACK

    top2++;
    sk2[top2] = '(';

    // PUT ALL VALUE OF sk1 IN sk3

    top1 = 0;
    for (; top2 >= 0;)
    {
        if (sk1[top1] == '-' || sk1[top1] == '+' || sk1[top1] == '*' || sk1[top1] == '/')
        {
            if (sk2[top2] == '-' || sk2[top2] == '+' || sk2[top2] == '*' || sk2[top2] == '/')
            {
                int p;
                int p2;
                p = priority(sk1[top1]);
                p2 = priority(sk2[top2]);
                if (p <= p2)
                {
                    while (sk2[top2] == '-' || sk2[top2] == '+' || sk2[top2] == '*' || sk2[top2] == '/')
                    {
                        top3++;
                        sk3[top3] = sk2[top2];
                        top2--;
                    }
                    top2++;
                    sk2[top2] = sk1[top1];
                }
                else
                {
                    top2++;
                    sk2[top2] = sk1[top1];
                }
            }
            else
            {
                top2++;
                sk2[top2] = sk1[top1];
            }
        }

        else if (sk1[top1] == '(')
        {
            top2++;
            sk2[top2] = sk1[top1];
        }
        else if (sk1[top1] == ')')
        {
            while (sk2[top2] != '(' && top2 != 0)
            {
                if (sk2[top2] == '-' || sk2[top2] == '+' || sk2[top2] == '*' || sk2[top2] == '/')
                {
                    top3++;
                    sk3[top3] = sk2[top2];
                }
                top2--;
            }
            top2--;
        }
        else
        {
            top3++;
            sk3[top3] = sk1[top1];
        }
        top1++;
    }

    // Print conversion of infix to postfix

    a = top3;
    top3 = 0;
    printf("\n\t\t your stack : ");
    for (int i = 0; i <= a; i++)
    {
        printf(" %c", sk3[top3]);
        top3++;
    }
    printf("\n\n\n");
}