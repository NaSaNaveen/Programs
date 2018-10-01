#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char s[100];
    while(scanf("%s",s)>0)
    {
        for(i=1;i<=strlen(s);i++)
        {
            if(i%2==0)
            {
                printf("%c",tolower(s[i-1]));
            }
            else
            {
                printf("%c",toupper(s[i-1]));
            }
        }
        printf(" ");
    }
}
