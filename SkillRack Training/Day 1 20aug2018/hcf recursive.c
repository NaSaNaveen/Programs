#include<stdio.h>
int hcf(int,int);
int main()
{
    unsigned long long int a,b;
    scanf("%llu %llu",&a,&b);
    printf("%d",hcf(a,b));
}
int hcf(int a,int b)
{
    return a==0?b:hcf(b%a,a);
}
