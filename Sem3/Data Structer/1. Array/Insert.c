#include<stdio.h>

void main()
{
    int num[10];
    int no,pos;
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter your num %d : ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n Which value you want to add : ");
    scanf("%d",&no);

    printf("\n Enter your value position : ");
    scanf("%d",&pos);

    for(i=10;i>0 && i!=pos-1;i--)
    {
        num[i]=num[i-1];
    }
    num[i]=no;

    printf("\n\n\t\t");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n\n");



}
