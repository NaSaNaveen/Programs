#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int n,i;

    scanf("%s",str);
    scanf("%d",&n);

    for(i=0;i<strlen(str);i++)
    {
        if(i%n==0 && n!=1 && i!=0)
        {
            printf("%c",str[i]);
        }
    }
}
