#include<stdio.h>
int main()
{
    int row,col;
    int n,printValue=1;
    scanf("%d",&n);
    int matrix[n][n];
    for(row=0;row<n;row++)
    {
        int index = (row%2==0?row/2:(n-row/2-1));
        //printf("%d--> ",index);
        for(col=0;col<n;col++)
        {
            //printf("%d ",printValue);
            matrix[index][col]=printValue++;
        }
        //printf("\n");
    }
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }
}

/*
 1  2  3  4  5
11 12 13 14 15
21 22 23 24 25
16 17 18 19 20
 6  7  8  9 10
*/
