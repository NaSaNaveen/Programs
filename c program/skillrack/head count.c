#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",abs((b-(4*a))/2));
    printf(" ");
    printf("%d",abs((b-(2*a))/2));
}
