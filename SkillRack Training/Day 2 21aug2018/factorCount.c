#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n, primeFactor, divisor;
    scanf("%d",&n);
    int factorCount=1;
    for(divisor=1;divisor*divisor<n;divisor++)
    {
        if(n%divisor==0)
        {
            printf("%d ",divisor);
            factorCount+=2;
        }
    }
    if(divisor*divisor==n)
    {
        printf("%d",divisor);
        factorCount++;
    }
    printf("\n%d",factorCount);
}
