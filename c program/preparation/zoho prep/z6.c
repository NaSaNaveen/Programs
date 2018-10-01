#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf("*");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

