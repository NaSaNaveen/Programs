#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int m,n;
    int flag=0;
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for( i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=-1;
            }
        }
    }
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            if(b[i]==b[j] && i!=j)
            {
                b[j]=-1;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("*%d ",a[i]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        printf("-%d ",b[j]);
    }
    printf("\n");
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            if(a[i]==b[j] && a[i]>=0 && b[j]>=0)
            {
                printf("%d ",a[i]);
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("Invalid");
    }
}
