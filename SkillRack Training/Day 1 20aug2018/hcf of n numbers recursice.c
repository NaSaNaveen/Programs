#include<stdio.h>
int main()
{
    int i;
    unsigned long long int a=0,b;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&b);
        a=hcf(a,b);
    }
    printf("%llu",a);
}
int hcf(a,b)
{
    return a==0?b:hcf(b%a,a);
}
