#include<stdio.h>
#include<stdlib.h>

int findElement(int[] ,int);
int main()
{
    int i,n,element;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    element=findElement(arr,n);
    printf("%d",element);
}

int findElement(int array[200],int size)
{
    int right_sum=0,left_sum=0,i,j;

    for(i=1;i<size;i++)
    {
        right_sum+=array[i];
    }

    for(i=0,j=1;j<size;i++,j++)
    {
        right_sum-=array[j];
        left_sum+=array[i];

        if(left_sum==right_sum)
        {
            return array[i+1];
        }
    }
    return -1;
}
