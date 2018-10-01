#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int min(int,int);
int minvalue=999,totalvalue=0,n;
int arr[100][100];
int row=0,col=0;
int main()
{
    char c;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d%c",&arr[i][j],&c);
        }
    }
    min(0,0);
    printf("%d",totalvalue);
}
int min(int i,int j)
{
    if(i==n && j==n)
    {
        return 0;
    }
    else if(i==n-1 && j<n-1)
    {
        row=i;
        col=j+1;
    }
    else if(i<n-1 && j==n-1)
    {
        row=i+1;
        col=j;
    }
    else
    {
        row=i+1;
        col=j+1;
    }
    printf("%d %d\n",row,col);
    totalvalue=minvalue;
    min(row,col);
}

