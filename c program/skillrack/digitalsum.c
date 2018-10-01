#include<stdio.h>
#include <stdlib.h>

void dsum(int);
int main()
{
    int n;
    scanf("%d",&n);
    dsum(n);
}

void dsum(int n)
{
    int rem=0,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(sum>9)
    {
        dsum(sum);
    }
    else
    {
        printf("%d",sum);
    }
}
