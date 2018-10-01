#include<stdio.h>
#include <stdlib.h>
void prime(int);
int main()
{
    int n,temp,i,flag=1;
    scanf("%d",&n);
    prime(n+1);
}
void prime(int p)
{
    int i,f=0,control;
    control=sqrt(p);
    for(i=2;i<control;i++)
    {
        if(p%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        f=0;
        prime(p+1);
    }
    else
    {
        printf("%d",p);
    }
}
