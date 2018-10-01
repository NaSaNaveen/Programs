#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    char letter;
    char charcase;
    char str[1000];
    int count=0;

    fgets(str,1000,stdin);
    scanf("%d %c",&n,&charcase);
    letter=(char)(n-1)+97;

    switch(charcase)
    {
        case 'U':
        case 'u':
            letter=toupper(letter);
            //printf("after switch%c\n",letter);
            break;

        case 'l':
        case 'L':
            letter=tolower(letter);
            //printf("after switch%c\n",letter);
            break;
    }
    for(i=0;i<strlen(str);i++)
    {
        printf("\n%c %c",str[i],letter);
        if(str[i]==letter)
        {
            count++;
        }
    }
    if(count==0)
    {
        count=-1;
    }
    printf("%d",count);
}
