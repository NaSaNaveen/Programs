#include<stdio.h>
int main()
{
    int sum=0;
    int n;
    scanf("%d",&n);
    int neon = n*n;
    while(neon>0)
    {
        sum=sum+(neon%10);
        neon=neon/10;
    }
    (sum==n)?printf("Neon Number"):printf("Not Neon Number");
}
