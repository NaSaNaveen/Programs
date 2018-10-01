#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,k,max=-9999,flag=1;
    scanf("%d %d",&m,&n);
    int array[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=1;k<m;k++)
            {
                if(max<array[k][j] && array[k][j]%2!=0)
                {
                    max=k;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                printf("%d ",array[max][j]);
            }
            else
            {
                printf("* ");
            }
            max=-9999;
        }
        printf("\n");
        max=-9999;
    }
}
