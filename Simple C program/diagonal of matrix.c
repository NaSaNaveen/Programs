#include<stdio.h>
int main()
{
    int i,j,row,col,a[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                printf("%d\n",a[i][j]);
            }
        }
    }
}
