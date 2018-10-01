#include<stdio.h>
#include <stdlib.h>
int n;
int main()
{
    int row,col;
    scanf("%d",&n);
    int matrix[n][n];
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d",&matrix[row][col]);
        }
    }
    int rotate;
    int startCol;
    scanf("%d",&rotate);
    for(row=0; row<n; row++)
    {
        startCol = col = (row%2)!=0 ?rotate:(n-rotate);
        do
        {
            printf("%d ",matrix[row][col]);
            col=(col+1)%n;
        }
        while(col!=startCol);
        printf("\n");
    }
}
