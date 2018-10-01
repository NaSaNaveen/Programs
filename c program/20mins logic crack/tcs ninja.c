#include<stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,j,a,n,x=-1,y=1,z=1;
    int fact;
    scanf("%lld",&n);
    if(n%2==0)
    {
        //prime
        for(i=0;i<n/2;i++)
        {
            z=prime(z+1);
        }
        printf("%d",z);
    }
    else
    {
        //fibo
        for(i=0; i<=(n/2)+1; i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        printf("%d",z);
    }
}
int prime(int p)
{
    int i,f=0;
    for(i=2;i<p;i++)
    {
        if(p%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        return p;
    }
    else
    {
        prime(p+1);
    }
}
