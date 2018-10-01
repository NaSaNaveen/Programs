#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],c;
    int len,i;
    scanf("%s %c",str,&c);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]!=c)
        {
            printf("%c",str[i]);
        }
        else
        {
            break;
        }
    }

}
