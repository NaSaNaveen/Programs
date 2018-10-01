#include<stdio.h>
int power(int n,int p)
{
    int x=1;
    while(p>0)
    {
        x=x*n;
        p--;
    }
    return x;
}
int main()
{
    int sum=0;
    int n,count=0;
    scanf("%d",&n);
    int armstrong = n;
    int temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    while(n>0)
    {
        sum+=power(n%10,count);
        n=n/10;
    }
    (sum==armstrong)?printf("Armstrong Number"):printf("Not Armstrong Number");
}
