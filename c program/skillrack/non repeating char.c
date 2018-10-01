#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0,flag=0;
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0; i<strlen(s1); i++)
    {
        for(j=i+1; j<strlen(s1); j++)
        {
            if(s1[i]==s1[j])
            {
                s1[i]='0';
            }
        }
    }
    for(i=0; i<strlen(s2); i++)
    {
        for(j=i+1; j<strlen(s2); j++)
        {
            if(s2[i]==s2[j])
            {
                s2[i]='0';
            }
        }
    }
    for(i=0; i<strlen(s1); i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
    for(i=0; i<strlen(s2); i++)
    {
        printf("%c",s2[i]);
    }
    printf("\n");
    for(i=0; i<strlen(s2); i++)
    {
        for(j=0; j<strlen(s1); j++)
        {
            if(s2[i]==s1[j])
            {
                s1[j]='0';
                break;
            }
            else if(s2[i]!='0')
            {
                printf("%c",s2[i]);
                break;
            }
        }
    }
    for(i=0; i<strlen(s1); i++)
    {
        for(j=0; j<strlen(s2); j++)
        {
            if(s1[i]==s2[j])
            {
                if(s1[i]=='0'&&s2[j]=='0')
                {
                    break;
                }
                else
                {
                    s2[i]='0';
                    break;
                }
            }
            else if(s1[i]!='0')
            {
                printf("%c",s1[i]);
                break;
            }
        }
    }
}
