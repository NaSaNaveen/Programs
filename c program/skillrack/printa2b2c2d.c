#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(int i=a;i<=b;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=c;i>=b;i--)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=b;i<=d;i++)
    {
        printf("%d ",i);
    }
}
