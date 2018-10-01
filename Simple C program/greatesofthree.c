#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is Greater",a);
    }
    if(b>c)
    {
        printf("%d is Greater",b);
    }
    else
    {
        printf("%d is Greater",c);
    }
    printf("\n");
    (a>b && a>c)?printf("%d is Greater",a):(b>c)?printf("%d is Greater",b):printf("%d is Greater",c);
}
