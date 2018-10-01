#include<stdio.h>
int main()
{
    int sudoku[9][9];
    int i,j,k,row=0,column=0;
    int n,rflag=0,cflag=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&sudoku[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        row=0;
        for(j=0;j<n;j++)
        {
            row=row+sudoku[i][j];
        }
        if(row>45)
        {
            rflag=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        column=0;
        for(j=0;j<n;j++)
        {
            column=column+sudoku[i][j];
        }
        if(column>45)
        {
            cflag=1;
            break;
        }
    }

    if(rflag==1||cflag==1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
