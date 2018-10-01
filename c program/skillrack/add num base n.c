#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,xd=0,yd=0,base=1,rem,sum=0;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);

    while(x>0)
    {
        rem=x%10;
        xd=xd+rem*base;
        x=x/10;
        base=base*n;
    }

    while(y>0)
    {
        rem=y%10;
        yd=yd+rem*base;
        y=y/10;
        base=base*n;
    }
    sum=xd+yd;
    printf("%d",sum);
}
