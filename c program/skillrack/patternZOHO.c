#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,a;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        l=1;
        a=i;
        for(j=i;j<=n;j++)
        {
            printf("%d ",a);
            a=a+(k-l);
            l++;
            a++;
        }
        printf("\n");
    }
}
