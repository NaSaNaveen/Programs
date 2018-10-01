#include<stdio.h>
int main()
{
    int i,j;
    int r,c;
    int a[100][100];
    scanf("%d",&r);
    c=r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
