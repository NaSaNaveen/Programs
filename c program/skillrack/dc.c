#include<stdio.h>
int main()
{
    int i;
    int n,j;
    char letter;
    char charcase;
    char str[1000];
    int count=0;

    fgets(str,1000,stdin);
    scanf("%d %c",&n,&charcase);

    int len = strlen(str);
    charcase = tolower(charcase);
    letter =(char) (charcase=='u')?(n-1)+65:(n+1)+97;
    for(j=0;j<len;j++)
    {
        if(letter == str[j])
        count++;
    }

    printf("%d",count);
}
