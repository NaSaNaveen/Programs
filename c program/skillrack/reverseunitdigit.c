#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    int arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]%10);
    }
}
