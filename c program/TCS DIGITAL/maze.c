#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i,j;
    int row=0,col=0,weight=0,mweight=0,right=0,down=0;
    scanf("%d",&n);
    int maz[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d,",&maz[i][j]);
        }
    }
    while(!((row==(n-1))&&(col==(n-1))))
    {
        if(row==(n-1))
        {
            weight=maz[row][col+1];
            col++;
        }
        else if(col==(n-1))
        {
            weight=maz[row+1][col];
            row++;
        }
        else
        {
            right=maz[row][col+1];
            down=maz[row+1][col];

            if(right<down)
            {
                weight=right;
                col++;
            }
            else
            {
                weight=down;
                row++;
            }
        }
        if(mweight<weight)
        {
            mweight=weight;
        }
    }
    printf("%d",mweight);
}
