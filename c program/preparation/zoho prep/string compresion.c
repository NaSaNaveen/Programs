#include<stdio.h>
int main()
{
    int count=1,len,i;
    char str[100];
    fgets(str,100,stdin);
    len=strlen(str)-1;
    for(i=0;i<len;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",str[i],count);
            count=1;
        }
    }
}
