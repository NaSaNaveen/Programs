#include<stdio.h>
#include <stdlib.h>
unsigned long long int findFactorCount(unsigned long long int n)
{
    unsigned long long int divisor,factorCount;
    for(divisor=1; divisor*divisor<n; divisor++)
    {
        if(n%divisor==0)
        {
            //printf("%d ",divisor);
            factorCount+=2;
        }
    }
    if(divisor*divisor==n)
    {
        //printf("%d",divisor);
        factorCount++;
    }
    return factorCount;
}
int main()
{
    unsigned long long int n,ctr;
    scanf("%llu",&n);
    unsigned long long int array[findFactorCount(n)],index=0,secIndex;
    for(ctr=1;ctr*ctr<n;ctr++)
    {
        if(n%ctr==0)
        {
            array[index++]=ctr;
        }
    }
    secIndex=index--;
    if(ctr*ctr==n)
    {
        array[index++]=ctr;
    }
    for(;secIndex>=0;secIndex--)
    {
        array[index++]=n/array[secIndex];
    }
    index=secIndex;
    for(index=0;index<secIndex;index++)
    {
        printf("%llu ",array[index]);
    }
    printf("\n");
    for(index=0;index<secIndex;index++)
    {
        printf("%llu ",findFactorCount(array[index]));
    }
}
