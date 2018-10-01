#include<stdio.h>
int main()
{
    long long int n;
    int i;
    long long int sum=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + pow(2,a[i]);
    }
    printf("%lld",sum%100);
}
