#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=0,l,a,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k+i;
    }
    a=k;
    m=n;
    for(i=1;i<=n;i++)
    {
        l=0;
        for(j=i;j<=n;j++)
        {
            printf("%d ",a);
            a=a-(m-l);
            l++;
        }
        a=k-i;
        printf("\n");
    }
}
