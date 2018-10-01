#include<stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int n,a[20],i,max=INT_MIN,c=0,v=0,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(i=2;i<max;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            v++;
        }
    }
    printf("%d",v);
}
