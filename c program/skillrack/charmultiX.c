#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int n,i=0;
    fgets(str,100,stdin);
    scanf("%d",&n);

    for(i=1;i<=strlen(str);i++)
    {
        if(i%n==0)
        {
            printf("%c",str[i-1]);
        }
    }
}
