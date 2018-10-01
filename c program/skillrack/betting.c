#include<stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[1000];
    int x,y,oddcount=0,evencount=0,i=0,j;
    while(scanf("%d",&arr1[i])>0)
    i++;

    x=arr1[i-2];
    y=arr1[i-1];

    for(j=0;j<=i-3;j++)
    {
        if(arr1[j]%2!=0)
        oddcount++;
        else
        evencount++;
    }

    int res=(oddcount*x)-(evencount*y);
    printf("%d",res);
}
