#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
