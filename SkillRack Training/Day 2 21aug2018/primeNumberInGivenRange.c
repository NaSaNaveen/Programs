#include<stdio.h>
#include<math.h>

int main()
{
    int i,index;
    unsigned long long int n;
    scanf("%llu",&n);
    unsigned long long int *arr =(unsigned long long int *)calloc(n+1, sizeof(unsigned long long int));
    for(i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(index=i*2;index<=n;index+=i)
            {
                arr[index]=1;
            }
        }
    }
    for(index=2;index<=n;index++)
    {
        if(arr[index]==0)
        {
            printf("\n%d ",index);
        }
    }
}
