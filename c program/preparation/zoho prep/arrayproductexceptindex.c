#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],y[100];
    int n=0,i,j,k=0,fact;

    while(scanf("%d",&x[n])>0)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                fact=fact*x[j];
            }
        }
        y[k]=fact;
        k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",y[i]);
    }
}
