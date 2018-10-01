#include<stdio.h>
int main()
{
    int n;
    int sum;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==sum)
        {
            printf("%d %d\n",a[i],a[j]);
            i++;
            j--;
        }
        else
        {
            if(a[i]+a[j]>sum)
            {
                j--;
            }
            if(a[i]+a[j]<sum)
            {
                i++;
            }
        }
    }
}
