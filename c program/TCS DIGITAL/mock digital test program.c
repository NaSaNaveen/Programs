#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int min(int,int);
int minvalue,totalvalue=0,n;
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
    minvalue=INT_MAX;
    if(i<n-1)
    {
        if(arr[i+1][j]<minvalue)
        {
            minvalue=arr[i+1][j];
            row=i+1;
            col=j;
        }
    }
    if(j<n-1)
    {
        if(arr[i][j+1]<minvalue)
        {
            minvalue=arr[i][j+1];
            row=i;
            col=j+1;
        }
    }
    else if(i==n && j<n-1)
    {
        row=i;
        col=j+1;
    }
    else if(i<n-1 && j==n)
    {
        row=i+1;
        col=j;
    }
    if(i==n-1&&j==n-1)
    {
        return 0;
    }
    printf("%d %d %d\n",row,col,totalvalue);
    totalvalue=minvalue;
    min(row,col);
}

