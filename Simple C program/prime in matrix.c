#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,n,flag=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            prime(a[i][j]);
        }
    }
}
int prime(int p)
{
    int i,f=0;
    if(p>1)
    {
        for(i=2; i<p; i++)
        {
            if(p%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d ",p);
        }
    }
}
