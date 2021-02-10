#include<stdio.h>

void main()
{
    int num[10];
    int i;
    int val;

    for(i=0;i<5;i++)
    {
        printf("\n Enter your num %d : ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n Enter your value : ");
    scanf("%d",&val);

    for(i=0;num[i]!=val && i<5;i++)
    {
    }
    if(num[i]!=val)
    {
        printf("\n\t Your value does not exist..");
    }
    else
    printf("\n position : %d",++i);
}

