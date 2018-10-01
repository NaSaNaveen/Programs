#include<stdio.h>
int main()
{
    int a =256;
    char str[100];
    //sprintf(name of string in which the value to be printed,"format specifiers",name of the variable from which the value to be printed);
    sprintf(str,"%d",a);
    printf("%s",str);

    int n;
    char s[100],ch;
    scanf("%s",s);
    //sscanf(name of the string from which the value to be read,"format specifiers",name of the variable to which the data to be stored in);
    sscanf(s,"%d%c",&n,&ch);
    printf("%d %c",n,ch);
}
