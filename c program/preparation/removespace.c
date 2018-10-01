#include<stdio.h>
int main()
{
    char str[100];
    int len,i,count=0;
    fgets(str,100,stdin);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        else
        {
            count++;
        }
    }
    printf("\n%d",count);
}
