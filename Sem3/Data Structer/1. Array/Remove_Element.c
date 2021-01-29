
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

    printf("\n Enter your value position : ");
    scanf("%d",&pos);

    for(i=0;i<5;i++)
    {
        if(i==pos-1);
        break;
    }
    for(int j=i+1;j<5;j++)
    {
        num[j]=num[j+1];
    }

    printf("\n\n\t\t");
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n\n");

}
