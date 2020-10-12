#include<stdio.h>

void main()
{
    int num[10];
    int i,j;
    int tmp;
    for(i=0;i<5;i++)
    {
        printf("\n Enter your num %d : ",i+1);
        scanf("%d",&num[i]);
    }

    for(i=1;i<5;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(num[j]<num[j-1])
            {
                tmp=num[j];
                num[j]=num[j-1];
                num[j-1]=tmp;
            }
        }
    }
    printf("\n\t\t");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
}
