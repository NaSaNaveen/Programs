#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,arr[100],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(n%2==0)
    {
        l=n/2;
    }
    else
    {
        l=(n/2)+1;
    }

    for(i=0;i<=l;i++)
    {
        if(i%2==0)
        {
            for(j=arr[i];j<=arr[i+1];j++)
            {
                printf("%d ",j);
            }
        }
        if(i%2!=0)
        {
            for(j=arr[i+1];j>=arr[i];j--)
            {
                printf("%d ",j);
            }
        }
    }
}
