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

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(num[i]>num[j])
            {
                tmp=num[i];
                num[i]=num[j];
                num[j]=tmp;
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
