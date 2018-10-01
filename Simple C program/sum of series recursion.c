#include<stdio.h>
int sum=0;
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumofseries(n));
}
int sumofseries(int n)
{
    if(n==0)
    {
        return sum;
    }
    sum=sum+n;
    if(n>0)
    {
        sumofseries(n-1);
        return sum;
    }
}
