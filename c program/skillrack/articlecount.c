#include<stdio.h>
#include<stdlib.h>
void printReverseOrder(char[]);
void printReverseOrder(char str[])
{
    int length = strlen(str);
    int i;
    for(i=length;i>=0;i--)
    {
        if(str[i]==' ')
        {
            printf("%s ",&str[i]+1);
            str[i]='\0';
        }
    }
    printf("%s ",str);
}

int main()
{
    char str[100];
    int len;
    fgets(str,100,stdin);
    len=strlen(str);
    str[len-1]='\0';
    printReverseOrder(str);
    return 0;
}
