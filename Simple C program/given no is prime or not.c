
#include<stdio.h>
int main()
{
    int n,i,flag=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not a Prime Number");
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("Is a Prime Number");
    }
}
