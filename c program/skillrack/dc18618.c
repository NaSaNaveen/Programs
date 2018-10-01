#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i+1][j]%2!=0)
            {
               printf("%d ",arr[i][j]);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}
