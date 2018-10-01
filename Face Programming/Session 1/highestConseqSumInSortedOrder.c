#include<stdio.h>
int main()
{
    int i;
    int n;
    int max=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
        if(a[i]<a[i+1])
        {
            sum=sum+a[i];
        }
        else
        {
            sum=sum+a[i];
            if(max<sum)
            {
                max=sum;
            }
            sum=0;
        }
    }
    printf("\n%d ",max);
}
