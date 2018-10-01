#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s\n%s",&s1,&s2);
    int i,j,t;
    for(i=0;i<strlen(s1);i++)
    {
        for(j=0;j<strlen(s2);j++)
        {
            if((s1[i]==s2[j])&&(s1[i+1]==s2[j+1])&&(s1[i+1]!='\0')&&s2[j+1]!='\0')
            {
                t=j+1;
            }
        }
    }
    for(i=0;i<=t;i++)
    printf("%c",s2[i]);
}
