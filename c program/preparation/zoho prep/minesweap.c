#include<stdio.h>
int main()
{
    int a[10][10]={0},i,j,c,n,n1,r,count=0;
    scanf("%d",&n);
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d %d",&r,&c);
        a[r][c]=42;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                if(a[i-1][j-1]==42)
                {
                    count++;
                }
                if(a[i-1][j]==42)
                {
                    count++;
                }
                if(a[i][j-1]==42)
                {
                    count++;
                }
                if(a[i+1][j+1]==42)
                {
                    count++;
                }
                if(a[i+1])
            }
        }
    }
}
