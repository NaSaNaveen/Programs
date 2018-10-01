#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    int product[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&product[i]);
    }
    for(i=0;i<n;i++)
    {
        if(product[i]>=1000)
        {
            product[i]=product[i]-product[i]*50/100;
        }
        else if(product[i]>500)
        {
            product[i]=product[i]-product[i]*25/100;
        }
        else if(product[i]>400)
        {
            product[i]=product[i]-product[i]*20/100;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+product[i];
    }
    if(sum>2000)
    {
        sum=sum-100;
    }
    printf("%.2f",(float)sum);
}
