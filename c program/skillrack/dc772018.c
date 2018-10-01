#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int base=1,decimal=0;
    int i=0,j,rem;
    int binary[100];
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;
        binary[i]=rem;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(j%2!=0 && binary[j]==0)
        {
            binary[j]=1;
        }
    }
    for(j=0;j<i;j++)
    {
        decimal=decimal+binary[j]*base;
        base=base*2;
    }
    printf("%d",decimal);
}
