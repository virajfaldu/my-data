#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int val)
{
    struct node *new1;

    if(top==NULL)
    {
        new1=malloc(sizeof(struct node));
        new1->data=val;
        new1->next=NULL;
        top=new1;
        return;
    }
    new1=malloc(sizeof(struct node));
    new1->data=val;
    new1->next=top;
    top=new1;
}

void pop()
{
    struct node *curr;
    if(top==NULL)
    {
        printf("\n\n\t Your stack is a unloaded..");
        return;
    }
    curr=top;
    printf("\n\n\t Your value is %d",curr->data);
    top=curr->next;
    free(curr);
}

int main()
{
    int ch;
    int val;
    do
    {
        
        printf("\n\n<-------------------------->");
        printf("\n\n1. PUSH ");
        printf("\n\n2. POP");
        printf("\n\n3. EXIT");
         printf("\n\n<-------------------------->");
        printf("\n\n Enter your choice : ");
        scanf("%d",&ch);

        if(ch==1)
        {   
            printf("\n\n\t Enter your value : ");
            scanf("%d",&val);
            push(val);
        }
        else if(ch==2)
        {  
            pop();
        }
        else 
        {
            printf("\n\n\t\t GOOD BYE....\n\n");
        }
    
    } while (ch!=3);
    
}