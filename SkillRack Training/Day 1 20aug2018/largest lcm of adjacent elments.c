#include<stdio.h>
#include <stdlib.h>
long int hcf(long int,long int);
int main()
{
    long int i;
    long int max=0,lcm;
    long int n;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        lcm=(a[i]*a[i+1])/(hcf(a[i],a[i+1]));
        if(lcm<max)
        {
            max=lcm;
        }
    }
    printf("%ld",max);
}
long int hcf(long int a,long int b)
{
    return a==0?b:hcf(b%a,a);
}
