#include<stdio.h>
#include <stdlib.h>

int main()
{
    int array[200];
    int i=0,j,k;
    int index,in,temp;

    while(scanf("%d",&array[i])>0)
    {
        i++;
    }

    for(index=0;index<i;index++)
    {
        for(in=0;in<i;in++)
        {
            if(array[in]>array[in+1])
            {
                temp=array[in];
                array[in]=array[in+1];
                array[in+1]=temp;
            }
        }
    }
    for(index=0;index<i;index++)
    {
        printf("%d ",array[index]);
    }
    printf("\n");
    i--;
    for(j=i,k=0;j>=i/2,k<=i/2;j--,k++)
    {
        if(j==k)
        {
            printf("%d ",array[k]);
        }
        else
        {
            printf("%d ",array[j]);
            printf("%d ",array[k]);
        }
    }
}

