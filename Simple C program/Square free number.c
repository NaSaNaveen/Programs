#include<stdio.h>
int main()
{
    int i,temp,j=0,flag=1,t;
    int n;
    int a[100];
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a[j++]=i;
        }
    }
    for(i=0;i<j;i++)
    {
        t=a[i];
        temp=sqrt(a[i]);
        if(a[i]!=(temp*temp))
        {
            while(1)
            {
                a[i]=a[i]-temp;
                if(a[i]!=0)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
                if(flag)
                {
                    break;
                }
            }
            if(flag)
            printf("%d ",t);
        }
    }
}
