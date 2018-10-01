#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    int len,i,j;

    scanf("%s",str);
    len=strlen(str);
    j=len-1;

    for(i=0;i<=(len/2);i++)
    {
        if(i!=(j-i))
        {
            if(str[i]==str[j-i])
            {
                printf("%c",str[i]);
            }
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
