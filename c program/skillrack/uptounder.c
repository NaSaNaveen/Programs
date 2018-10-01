#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int len,i,count=0;
    fgets(str,100,stdin);

    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!='_')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    for(i=count;i<len;i++)
    {
        printf("%c",str[i]);
    }
}
