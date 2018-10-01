#include<stdio.h>
int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    digitsCube(n);
    return 0;
}
void digitsCube(unsigned long long int n)
{
    if(n>0)
    {
        digitsCube(n/10);
        printf("%d",(n%10)*(n%10)*(n%10));
    }
}
