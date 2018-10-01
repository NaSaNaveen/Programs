#include<stdio.h>
int main(int count,char *parameters[])
{
    printf("%d",count);
    char ch , *str;
    str=parameters[1];
    printf("%s",str);
    return 0;
}
