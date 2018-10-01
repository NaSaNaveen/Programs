#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int x=1,y=1,z=0;
    for(i=0;i<n;i++)
    {
        z=x+y;
        if(z>n)
        {
            break;
        }
        if(isPrime(z))
        {
            printf("%d ",z);
        }
        x=y;
        y=z;
    }
}
int isPrime(int p)
{
    int i;
    for(i=2;i*i<p;i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}
