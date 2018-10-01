#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,j;
    int max=0,check=0,sum=0;
    int array[200];
    while(scanf("%d",&array[i])>0)
    {
        i++;
    }
    i--;
    n=array[i];

    for(j=0;j<i;j++)
    {
        sum=sum+array[j];
    }
    for(j=0;j<i;j++)
    {
        check=sum-array[j];
        if(check%n==0 && check>max)
        {
            max=check;
        }
    }
    printf("%d",max);
}
