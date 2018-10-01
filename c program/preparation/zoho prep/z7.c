#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    char x[100];
    fgets(x,100,stdin);
    n=strlen(x);
    for(i=1;i<n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%c",x[j]);
        }
        printf("\n");
    }
}

