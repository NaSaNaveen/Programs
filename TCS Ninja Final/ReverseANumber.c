#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        sum=sum*10+(n%10);
        n=n/10;
    }
    printf("%d",sum);
}