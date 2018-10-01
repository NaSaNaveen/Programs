#include<stdio.h>
int main()
{
    int array[100];
    int i,j,k,n=0,findex,bindex=0;

    while(scanf("%d",&array[n])>0)
    {
        n++;
    }

    for(i=0;i<=n;i++)
    {
        if(array[i]==0)
        {
            findex=i;
            for(j=findex-1;j>=bindex;j--)
            {
                printf("%d ",array[j]);
            }
            printf("%d ",array[findex]);
            bindex=findex+1;
        }
    }
    for(j=n-1;j>=bindex;j--)
    {
        printf("%d ",array[j]);
    }
}
