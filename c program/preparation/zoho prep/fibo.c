#include<stdio.h>
int main()
{
    int x=-1,y=1,z;
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        z=x+y;
        if(z%2!=0)
        {
            sum=sum+z;
            printf("%d ",z);
        }
        x=y;
        y=z;
    }
    printf("\n%d",sum);
}
