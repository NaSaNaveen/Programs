#include<stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,temp,sortmat[4];
    scanf("%d %d",&r,&c);
    int mat[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    sortmat[0]=mat[0][0];
    sortmat[1]=mat[0][c-1];
    sortmat[2]=mat[r-1][0];
    sortmat[3]=mat[r-1][c-1];

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(sortmat[i]>sortmat[j])
            {
                temp=sortmat[i];
                sortmat[i]=sortmat[j];
                sortmat[j]=temp;
            }
        }
    }
    mat[0][0]=sortmat[0];
    mat[0][c-1]=sortmat[1];
    mat[r-1][c-1]=sortmat[2];
    mat[r-1][0]=sortmat[3];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
