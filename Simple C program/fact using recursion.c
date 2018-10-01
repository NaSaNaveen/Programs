#include<stdio.h>
int f=1;
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int n)
{
    if(n==0)
    {
        return f;
    }
    f=f*n;
    if(n>0)
    {
        fact(n-1);
        return f;
    }

}
