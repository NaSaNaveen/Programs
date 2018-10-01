#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int i,j;
    int ilen,jlen;

    scanf("%s",s1);
    scanf("%s",s2);

    ilen=strlen(s1);
    jlen=strlen(s2);

    for(j=jlen-1,i=0;j>=0,i<ilen;j--,i++)
    {
        if(s2[j]!=NULL)
        {
            printf("%c",s2[j]);
        }
        if(s1[i]!=NULL)
        {
            printf("%c",s1[i]);
        }
    }
}
