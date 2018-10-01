#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int n,row=0,col=0;
    scanf("%d",&n);
    int quadrant = (n/2);
    printf("%d\n",quadrant);
    int a[n][n],topleft[n][n];
    int b[n][n],bottomright[n][n];
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
            if(i<=quadrant&&j<=quadrant)
            {
                topleft[row++][col++]=a[i][j];
            }
        }
    }
    printf("\n");

    row=0;
    col=0;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
            if(i>=quadrant&&j>=quadrant)
            {
                bottomright[row++][col++]=b[i][j];
            }
        }
    }
    printf("\n");
    row=0;
    col=0;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            int flag=1;
            if(i<=quadrant&&j<=quadrant)
            {
                printf("%d ",bottomright[row++][col++]);
            }
            /*else
            {
                printf("%d ",a[i][j]);
            }*/
        }
        printf("\n");
    }
    printf("\n");

    row=0;
    col=0;
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int flag=1;
            if(i>=quadrant&&j>=quadrant)
            {
                printf("%d ",topleft[row++][col++]);
            }
            /*else
            {
                printf("%d ",b[i][j]);
            }*/
        }
        printf("\n");
    }

}
