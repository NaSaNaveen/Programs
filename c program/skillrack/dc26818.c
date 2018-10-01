#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    long long int n,x=1,temp;
    int count=0,i,flag=0;
    scanf("%lld",&n);
    if(n<0)
    {
        flag=1;
    }
    n=llabs(n);
    temp=n;

    while(n>1)
    {
        count++;
        n=n/2;
    }
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        x=x*2;
        printf("%lld\n",x);
    }
    if(flag==0)
    {
        if(x==temp)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        if(x==temp && count%2!=0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}
