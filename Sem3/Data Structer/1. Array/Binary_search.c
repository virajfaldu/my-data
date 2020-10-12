#include<stdio.h>

void main()
{
    int num[10];
    int i,j=0;
    int val,min=0,max,mid;
    for(i=0;i<5;i++)
    {
        printf("\n Enter your num %d : ",i+1);
        scanf("%d",&num[i]);
    }

     for(i=0;i<5;i++)
    {
        if(num[i]>num[i+1])
        {
            printf("\n Your array is unsorted ....");
            goto hell;
        }
    }

    printf("\n Enter your value value : ");
    scanf("%d",&val);

        max=i-1;

    while(j!=1 && min<=max)
    {
       mid=(min+max)/2;

       if(num[mid]<val)
        min=mid+1;

       else if(num[mid]>val)
        max=mid-1;

       else if(num[mid]==val)
       {
            printf("\n position : %d",mid+1);
            j++;
            break;
       }
    }
    hell:
    if(max<min)
    {
        printf("\n Your value does not exit ");
    }

}
