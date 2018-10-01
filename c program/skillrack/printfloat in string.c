#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int i;
    fgets(s,50,stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(!(isalpha(s[i])))
        {
            if(!(s[i]==' '))
            {
                printf("%c",s[i]);
            }
        }
    }
}
