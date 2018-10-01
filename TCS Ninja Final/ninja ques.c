#include<stdio.h>
int main()
{
    int i,x=1;
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        for(i=0;i<(n/2);i++)
        {
            printf("%d ",x);
            x=x*2;
        }
    }
    else
    {
        for(i=0;i<(n/2);i++)
        {
            printf("%d ",x);
            x=x*3;
        }
    }
    printf("\n%d",x);
    return 0;
}
