#include<stdio.h>
typedef int naveen;
struct st
{
    char a;
    int e;
    double x;
}s;
int main()
{
    naveen a;
    scanf("%d",&a);
    
    printf("%d--%d",a,sizeof(s.x));
}