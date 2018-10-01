#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,index;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    int t=j;
    while(i>0)
    {
        printf("%d ",t);
        t=t+k;
        i--;
    }
}
