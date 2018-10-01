#include<stdio.h>
#include <stdlib.h>

int main()
{
    int digit[100],i=0,sum=0,j;
    while(scanf("%d",&digit[i])>0)
    {
        i++;
    }
    for(j=0;j<i;j++)
    {
        printf("%d\n",sum);
        sum+=digit[j];
    }
    printf("%d",sum);
}
