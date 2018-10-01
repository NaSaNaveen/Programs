#include<stdio.h>
int main()
{
    int n;
    int high,low;
    scanf("%d",&n);
    int a[n];
    low=0;
    high=n-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int mid = low+((high - low)/(a[high]-a[low]))*(x-a[low]);
    // int mid = low + ((high-low)/a[high]-a[low])*(x-a[low]);
    printf("element %d found at position %d",x,mid+1);
}