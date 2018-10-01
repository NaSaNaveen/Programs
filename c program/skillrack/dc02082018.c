#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int t;
    scanf("%d",&n);
    
    t=palindrome(n-1,n+1);
    printf("%d",t);
}
int palindrome(int a,int b)
{
    int reva=0,revb=0;
    int tempa,tempb;
    tempa=a;
    tempb=b;
    
    while(tempa>0)
    {
        reva=reva*10+(tempa%10);
        tempa=tempa/10;
    }
    while(tempb>0)
    {
        revb=revb*10+(tempb%10);
        tempb=tempb/10;
    }
    if(reva==a && revb==b)
    {
        return a;
    }
    else if(reva==a)
    {
        return a;
    }
    else if(revb==b)
    {
        return b;
    }
    else
    {
        palindrome(a-1,b+1);
    }
}