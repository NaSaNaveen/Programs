#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char s[100];
    while(scanf("%s",s)>0)
    {
        for(i=0;i<=strlen(s);i++)
        {
            if(i==0)
            {
                printf("%c",toupper(s[i]));
            }
            else
            {
                printf("%c",tolower(s[i]));
            }
        }
        printf(" ");
    }
}
