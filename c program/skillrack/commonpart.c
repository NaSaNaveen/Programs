#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int i,j,flag=0;
    fgets(s,100,stdin);

    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
                printf("%c",s[i]);
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}
