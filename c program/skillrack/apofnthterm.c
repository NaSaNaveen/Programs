#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i;
    int difference;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&n);
    difference=b-a;
    for(i=0;i<n-1;i++)
    {
        a=a+difference;
    }
    printf("%d",a);
}
