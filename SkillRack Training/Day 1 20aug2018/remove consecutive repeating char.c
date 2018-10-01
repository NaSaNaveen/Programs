#include<stdio.h>
int main()
{
    int i;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[i+1])
        {
            printf("%c",str[i]);
        }
    }
}

