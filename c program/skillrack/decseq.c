#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,i,x,y=0;
    scanf("%d %d",&n,&d);
    x=d;
    y=n-x;
    for(i=0;i<d;i++)
    {
       printf("%d ",y);
       x--;
       y=y-x;
    }
}
