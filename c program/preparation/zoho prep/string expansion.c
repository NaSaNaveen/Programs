#include<stdio.h>
int main()
{
    char str[100];
    char alpha[50];
    int len,i,x=0,y=0,k=0,j,l=0;
    char digit[50];

    fgets(str,100,stdin);
    len=strlen(str)-1;

    for(i=0;i<len;i++)
    {
        if(isalpha(str[i]))
        {
            alpha[x]=str[i];
            x++;
        }
        else
        {
            digit[y]=str[i];
            y++;
        }
    }

    for(i=0;i<len/2;i++)
    {
        for(j=0;j<digit[l]-48;j++)
        {
            printf("%c",alpha[k]);
        }
        k++;
        l++;
    }
}
