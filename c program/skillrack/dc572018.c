#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],k,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&k);
        for(j=k;j<n;j++)
        {
            a[j-1]=a[j];
        }
    }
    printf("%d",a[0]);
}
