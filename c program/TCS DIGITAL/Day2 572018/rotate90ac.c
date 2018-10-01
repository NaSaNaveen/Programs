#include<stdio.h>
int main()
{
    int mat[10][10];
    int row,col;
    int i,j;

    scanf("%d",&row);
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=col-1;i>=0;i--)
    {
        for(j=row-1;j>=0;j--)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}
