#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++)
    {
        //printf("i*i-->%d\n",i*i);
        if(n%i==0)
        {
            printf("%d is Not a Prime Number",n);
            return 0;
        }
    }
    printf("%d is Prime Number",n);
    return 0;
}