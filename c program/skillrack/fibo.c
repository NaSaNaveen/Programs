#include<stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,n,x=-1,y=1,z;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        z=x+y;
        printf("%lld\n",z);
        x=y;
        y=z;
    }
}
