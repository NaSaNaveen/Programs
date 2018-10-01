#include<stdio.h>
int main()
{
    int arr[100];
    int range,i,j,k,sum1=0,sum2=0;
    scanf("%d",&range);
    for(i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<range-1;i++)
    {
        sum1=0;
        sum2=0;
        for(j=i-1;j>=0;j--)
        {
            sum1=sum1+arr[j];
        }
        for(k=i+1;k<range;k++)
        {
            sum2=sum2+arr[k];
        }
        if(sum1==sum2)
        {
            printf("%d",arr[i]);
        }
    }
}
