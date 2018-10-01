#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,a,m;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                a=i;
            }
            else if(j%2!=0)
            {
                //a=a+(((i-1)*2)-(2*j-3)+1);
                a=a+((i-(j-1))+(i-j)+1);
            }
            else
            {
                a=a+((n-i)*2+1);
            }
            printf("%d ",a);
        }
        printf("\n");
    }
}
