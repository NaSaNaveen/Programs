#include<stdio.h>
#include<limits.h>
int main()
{
    //printf("%f\n%d",INT_MIN,INT_MAX);
    int n;
    int max=INT_MIN,index,smax=INT_MIN;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            index=i;
            max=a[i];
        }
    }
    a[index]=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>smax)
        {
            smax=a[i];
        }
    }
    printf("%d",smax);
}
