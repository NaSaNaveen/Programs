#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20][20],i,j,sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    sum=arr[0][0]+arr[0][n-1]+arr[n-1][0]+arr[n-1][n-1];
    printf("%d",sum);
}
