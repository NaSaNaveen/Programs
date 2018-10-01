#include<stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int x,sum=0;
    unsigned long long int even=0,odd=0;
    unsigned long long int n;
    scanf("%llu",&n);
    unsigned long long int temp=n;
    while(temp>0)
    {
        x=temp%10;
        sum=sum+x;
        x%2==0?even++:odd++;
        temp=temp/10;
    }
    if(even>=odd)
    {
        unsigned long long int x=-1,y=1,z,i;
        for(i=1; i<n; i++)
        {
            z=x+y;
            if(z>n)
            {
                break;
            }
            printf("%llu ",z);
            x=y;
            y=z;

        }
    }
    else
    {
        unsigned long long int t =n,i;
        for(i=1; i<n; i=i+sum)
        {
            printf("%llu ",i);
            if(i+sum>n)
            {
                break;
            }
        }
    }
}
