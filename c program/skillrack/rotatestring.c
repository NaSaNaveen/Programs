#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int n,i,len,range,j;

    fgets(str,100,stdin);
    scanf("%d",&n);
    len=strlen(str)-1;
    printf("%d",len);
    str[len]='\0';
    range=len-n;

    if(len==n)
    {
        printf("%s",str);
    }
    else
    {
        while(len>0)
        {
            printf("%c",str[range]);
            str[range]='\0';
            range++;
            if(str[range]=='\0')
            {
                range=0;
            }
            len--;
        }
    }
}
