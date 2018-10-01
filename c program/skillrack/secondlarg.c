#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n,large=INT_MIN,slarge=INT_MIN,num;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&num);
        if(num>large)
        {
            slarge=large;
            large=num;
        }
        else if(num>slarge)
        {
            slarge=num;
        }
        n--;
    }
    printf("%d",slarge);
}
