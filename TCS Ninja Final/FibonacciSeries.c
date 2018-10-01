#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long int x,y,z;
    x=-1;
    y=1;
    z=0;
    for(int i=0;i<n;i++)
    {
        z=x+y;
        printf("%llu ",z);
        x=y;
        y=z;
    }
}