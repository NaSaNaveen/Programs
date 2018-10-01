#include<stdio.h>
int n;
int main()
{
    int round;
    scanf("%d",&n);
    int matrix[n][n];
    int row,col;
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d",&matrix[row][col]);
        }
    }
    int totalRound = (n+1)/2;
    for(round=0; round<totalRound; round++)
    {
        int from = round, to=n-round-1;

        leftToRight(matrix,from,to);
        topToBottom(matrix,from,to);
        rightToLeft(matrix,from,to);
        bottomToTop(matrix,from,to);
    }
}
void leftToRight(int matrix[n][n],int from,int to)
{
    int row = from, col;
    for(col=from; col<=to; col++)
    {
        printf("%d ",matrix[row][col]);
    }
}
void topToBottom(int matrix[n][n],int from,int to)
{
    int row, col=to;
    for(row=from+1; row<=to; row++)
    {
        printf("%d ",matrix[row][col]);
    }
}
void rightToLeft(int matrix[n][n],int from,int to)
{
    int row = to, col;
    for(col=to-1; col>=from; col--)
    {
        printf("%d ",matrix[row][col]);
    }
}
void bottomToTop(int matrix[n][n],int from,int to)
{
    int row, col=from;
    for(row=to-1; row>=from+1; row--)
    {
        printf("%d ",matrix[row][col]);
    }
}
