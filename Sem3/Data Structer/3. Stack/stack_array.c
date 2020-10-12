#include<stdio.h>

 int top=-1;
 int STACK[3];


void push()
{
    char val;
    if(top==3)
        {
            printf("STACK is overloaded ...");
            return;
        }
    else
        {
            printf("\n\n\t Enter your value : ");
            scanf(" %c",val);
            top++;
            STACK[top]=val;
        }
}
void pop()
{
    if(top==-1)
    {
        printf("\n\n\t STACK is unload ...");
        return;
    }
    else
    {
        printf("\n\n\t your value : %d",STACK[top]);
        top=top-1;
    }
}
void peep(char val,int pos)
{
    STACK[pos-1]=val;
}
void search(int pos)
{
    printf("\n\n\t Your val is %d",STACK[pos-1]);
}
int main()
{
    int ch,pos;
    char val;

    do
    {
        printf("\n\n<---------------------------->");
        printf("\n\nIn below i am giving choice......");
        printf("\n\n1. PUSH");
        printf("\n\n2. POP");
        printf("\n\n3. PEEP");
        printf("\n\n4. search");
        printf("\n\n5. EXIT");
        printf("\n\n<---------------------------->");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);

        if(ch==1)
        {
            push();
        }
        else if(ch==2)
        {
            pop();
        }
        else if(ch==3)
        {
            printf("\n\n\tEnter your value : ");
            scanf(" %c",val);
            printf("\n\n\tWhere you want to set : ");
            scanf("%d",&pos);
            peep(val,pos);
        }
        else if(ch==4)
        {
           printf("\n\n\tEnter your position : ");
           scanf("%d",&pos);
           search(pos);
        }
        else if(ch==5)
        {
            printf("\n\n\t\t NIKAL TERI MAA KI NIKALLLLLLLL.........\n\n");
        }

    } while(ch!=5);

}
