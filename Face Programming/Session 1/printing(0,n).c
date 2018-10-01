#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,r=(n-1);
    while(l<r)
    {
        if(a[l]==0)
        {
            l++;
        }
        else if(a[r]!=0)
        {
            r--;
        }
        else
        {
            int t=a[l];
            a[l]=a[r];
            a[r]=t;
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
