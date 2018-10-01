#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i,j,temp,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&r);
    r=r%n;

    for(i=0;i<r;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
