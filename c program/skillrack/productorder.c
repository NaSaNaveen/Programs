#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i=1,j,rem=0,dig[10],sum=0,prd=1;
    scanf("%d",&x);
    n=x;
    while(n>0)
    {
        rem=n%10;
        dig[i]=rem;
        i++;
        n=n/10;
    }

    for(j=1;j<(i/2)+1;j++)
    {
        if(j!=i-j)
        {
            prd=dig[j]*dig[i-j];
        }
        else
        {
            prd=dig[j];
        }
        sum=sum+prd;
    }
    printf("\n%d",sum);
}
