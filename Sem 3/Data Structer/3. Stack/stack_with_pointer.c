#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int cap;
    int *array;
};
struct stack *p;
void create_stack(int val)
{
    p=malloc(sizeof(struct stack));
    p->top=-1;
    p->cap=val;
    p->array=malloc(sizeof(int)*p->cap);

}
void push_stack()
{
    if(p->top!=p->cap-1)
    {
        int item;
        p->top++;
        printf("\n\n\t Enter your value : ");
        scanf("%d",&item);
        p->array[p->top]=item;
        return;
    }
    else
    {
        printf("\n\n\t Stack is overloaded ...");
    }
    
}
void pop_stack()
{
    if(p->top==-1)
    {
        printf("\n\n\t Stack is unloaded ...");
        return;
    }
    else
    {
        printf("\n\n\t Your value is %d",p->array[p->top]);
        p->top--;
    }
    
}
void main()
{
    int ch;
    int size;
    do
    {
       printf("\n\n<--------------------->"); 
       printf("\n\n 1.Create a stack");
       printf("\n\n 2.PUSH");
       printf("\n\n 3.POP");
       printf("\n\n 4.EXIT");
       printf("\n\n<--------------------->");
       printf("\n\n Enter your choice : ");
       scanf("%d",&ch);

       if(ch==1)
       {
           printf("\n\n\tHow long array you want : ");
           scanf("%d",&size);
           create_stack(size);
       }
        else if(ch==2)
        {
           push_stack();
        }
        else if(ch==3)
        {
            pop_stack();
        }
        else if(ch==4)
        {
            printf("\n\n\t\t Got Hell ...\n\n");
        }

    } while (ch!=4);
    
}