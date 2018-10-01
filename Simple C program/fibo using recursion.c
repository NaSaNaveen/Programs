#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
}
int fibo(n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
