#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem=0,rev=0,r=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    while(rev>0)
    {
        r=rev%10;
        printf("%d",r*2);
        rev=rev/10;
    }
    while(t%10==0)
    {
        printf("0");
        t=t/10;
    }
}
