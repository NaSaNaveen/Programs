#include<stdio.h>
int main()
{
    int row,col;
    int startRowIndex=0,endRowIndex,startColumnIndex=0,endColumnIndex,i,j;
    scanf("%d %d",&row,&col);
    endRowIndex=row;
    endColumnIndex=col;
    int mat[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    while(startRowIndex<endRowIndex && startColumnIndex<endColumnIndex)
    {
        for(i=0;i<endColumnIndex;i++)
        {
            printf("%d ",mat[startRowIndex][i]);
        }
        startRowIndex++;

        for(i=startRowIndex;i<endRowIndex;i++)
        {
            printf("%d ",mat[i][endColumnIndex-1]);
        }
        endColumnIndex--;

        if(startRowIndex<endRowIndex)
        {
            for(i=endColumnIndex-1;i>=startColumnIndex;i--)
            {
                printf("%d ",mat[endRowIndex-1][i]);
            }
            endRowIndex--;
        }
        if(startColumnIndex<endColumnIndex)
        {
            for(i=endRowIndex-1;i>startRowIndex;i--)
            {
                printf("%d ",mat[i][startColumnIndex]);
            }
            startColumnIndex++;
        }
    }
}
