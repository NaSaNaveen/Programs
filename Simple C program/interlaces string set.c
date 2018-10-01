6#include<stdio.h>
int main()
{
    char c[100][100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n*2;i++)
    {
        scanf("%s",c[i]);
    }
    for(i=0;i<n+1;i=i+2)
    {
        for(j=0;j<=n*n;j++)
        {
            printf("%c%c",c[i][j],c[i+1][j]);
        }
    }
}
