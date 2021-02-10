#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL;

void insert_node(int val)
{
    struct node *curr,*new1;
    int i,num;
    if(first!=NULL)
    {
        printf("\n\t\t Linklist is already exist...");
        return;
    }
    for ( i = 0; i < val; i++)
    {
        printf("\n\t\tEnter a value : ");
        scanf("\n%d",&num);

        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=num;
        new1->next=NULL;

        if(first==NULL)
        {
            first=new1;
            curr=first;
        }
        curr->next=new1;
        curr=curr->next;

    }

}

void insert_beg(int val)
{
    struct node *new1;

    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;


    new1->next=first;
    first=new1;
}

void insert_after(int val,int key)
{
    struct node *curr,*new1;
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;

    if(first==NULL)
    {
        printf("\n Your linklist is empty..");
        return;
    }
    curr=first;


    while(curr!=NULL && curr->data!=key)
    {
        curr=curr->next;
    }
    new1->next=curr->next;
    curr->next=new1;


}

void insert_before(int val,int key)
{
    struct node *curr,*new1,*prev;
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;

    if(first==NULL)
    {
        printf("\n Your linklist is empty..");
        return;
    }
    curr=first;

    if(curr->data==key)
    {
        new1->next=first;
        first=new1;
        return;

    }
    while(curr!=NULL && curr->data!=key)
    {
        prev=curr;
        curr=curr->next;
    }
    new1->next=prev->next;
    prev->next=new1;

}

void split(int val)
{
    struct node *curr;
    curr=first;
    if(curr->next==NULL)
    {
        printf("\n\n\t\t You can not split this type of linklist...");
        return;
    }
    while(curr->data!=val && curr!=NULL)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("\n\n\t\t Your value does not exist in this linklist");
        return; 
    }

    second=curr->next;
    curr->next=NULL;
}

void join()
{
    struct node *curr;
    curr=first;

    if(second==NULL)
    {
        printf("\n\n\t\t Second linklist is not created...");
        return;
    }

    while(curr->next!=NULL)
    {
        curr=curr->next;
    }

    curr->next=second;
    second=NULL;


}

void insert_end(int val)
{
        struct node *new1,*curr;

        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=val;
        new1->next=NULL;

        curr=first;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=new1;

}

void display()
{

    struct node *curr;
    int val;

        if(second!=NULL)
        {
            printf("\n\t which node your want to display : ");
            scanf("%d",&val);

            if(val==1)
            {
                curr=first;
        
            }
            else
            {
                curr=second;
            }    
        }
        else 
        {
            curr=first;
        }
        
    printf("\n\n\t");
    while(curr->next!=NULL)
    {
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("%d ",curr->data);
}

void sort_node()
{
    int tmp;
        struct node *i,*j;
        for(i=first;i!=NULL;i=i->next)
        {
            for(j=i;j!=NULL;j=j->next)
            {
                if(i->data>j->data)
                {
                        tmp=i->data;
                        i->data=j->data;
                        j->data=tmp;
                }
            }
        }


}

void count()
{
    struct node *curr;
    int c=0,odd=0,even=0;
    curr=first;
    while(curr!=NULL)
    {
        if(curr->data % 2==0)
        {
            even++;
        }
        if(curr->data % 2!=0)
        {
            odd++;
        }
        c++;
        curr=curr->next;
    }
    printf("\n\t NUmber of node : %d ",c);
    printf("\n\t Odd number : %d ",odd);
    printf("\n\t Even number : %d",even);
}
void delete_node(int val)
{
    struct node *prev,*curr;
    int ch;
    
    if(second!=NULL)
    {   
        printf("\n\t Enter your linklist number : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            curr=first;
            if(curr->data==val)
            {   
                first=curr->next;
                free(curr);
                return;
            }
        }
        else 
        {
            curr=second;
            if(curr->data==val)
            {
                second=curr->next;
                free(curr);
                return;
            }
        }
    }
    else 
    {
        curr=first;
            if(curr->data==val)
            {   
                first=curr->next;
                free(curr);
                return;
            }
    }
    while(curr!=NULL && curr->data!=val)
    {   
        prev=curr;
        curr=curr->next;
    }

    if(curr==NULL)
    {
        printf("\n\n\t\t This type of node is not available....");
        return;
    }
    prev->next=curr->next;
    free(curr);
}

void delete_first()
{
    struct node *curr,*prev;
    int ch;
    printf("\n\t For which linklist you want delete node : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        curr=first;

        first=curr->next;
        free(curr);
        return;
    }
    else if(ch==2 && second != NULL)
    {
        curr=second;
        second=curr->next;
        free(curr);
        return;
    }
    else 
    {
        printf("\n\t incorrect value...");
        return;
    }
    
}

void delete_last()
{
    struct node *curr,*prev;
    int ch;

    printf("\n\t For which linklist you want delete node : ");
    scanf("%d",&ch);

    if(ch==1)
    {
        curr=first;
    }
    else if(ch==2 && second != NULL)
    {
        curr=second;
    }
    else 
    {
        printf("\n\t incorrect value...");
        return;
    }

    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    free(curr);
}

void main()
{

    int val,ch;
    int i=0,key;
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
        printf("\n\n 14. Exit");
        printf("\n\n|-------------------------------------|");
        printf("\n\n Enter your choice : ");
        scanf("%d",&ch);


        if(ch==1)
        {
            printf("\n\tHow many node you want : ");
            scanf("%d",&val);
            insert_node(val);
            i++;
        }
        else if(i==1)
        {

            if(ch==2)
            {
                printf("\n\tEnter your val : ");
                scanf("%d",&val);
                insert_beg(val);
            }
            else if(ch==3)
            {
                printf("\n\tEnter your val : ");
                scanf("%d",&val);
                insert_end(val);
            }
            else if(ch==4)
            {
                printf("\n\tEnter your value : ");
                scanf("%d",&val);
                printf("\n Enter your key : ");
                scanf("%d",&key);

                insert_after(val,key);
            }
            else if(ch==5)
            {
                printf("\n\tEnter your value : ");
                scanf("%d",&val);
                printf("\n Enter your key : ");
                scanf("%d",&key);

                insert_before(val,key);
            }
            else if(ch==6)
            {
                printf("\n\t Enter your value : ");
                scanf("%d",&val);

                split(val);
            }
            else if(ch==7)
            {
                join();
            }
            else if(ch==8)
            {
                display();
            }
            else if(ch==9)
            {
                sort_node();
            }
            else if(ch==10)
            {
                count();
            }
            else if(ch==11)
            {
                printf("\n\t which value you are want to delete : ");
                scanf("%d",&val);
                delete_node(val);
            }
            else if(ch==12)
            {
                delete_first();
            }
            else if(ch==13)
            {
                delete_last();
            }
            else if(ch==14)
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
    }while(ch!=14);


}
