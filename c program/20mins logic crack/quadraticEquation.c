#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    int nr,pr;
    scanf("%d %d %d",&a,&b,&c);
    if(a==0&&b==0&&c==0)
    {
        printf("No roots");
        return 0;
    }
    else
    {
        if((sqrt((b*b)-(4*a*c)))<=0)
        {
            printf("No roots");
            return 0;
        }
        else
        {
            nr=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
            pr=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
        }
    }
}
