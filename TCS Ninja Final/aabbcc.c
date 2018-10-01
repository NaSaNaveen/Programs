#include<stdio.h>
int main()
{
    int i;
    char str[1001];
    scanf("%s",str);
    int ch[26]={0};
    for(i=0;str[i]!='\0';i++)
    {
        ch[str[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(ch[i]>0)
        printf("%c%d",i+'a',ch[i]);
    }
}
