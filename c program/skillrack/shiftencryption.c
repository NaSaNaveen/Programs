#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i=0;
    char string[100];
    fgets(string,100,stdin);
    scanf("%d\n%d",&x,&y);
    while(string[i]!='\0')
    {
        if(isalpha(string[i]))
        {
            string[i]=string[i]+x;
        }

        if(isdigit(string[i]))
        {
            string[i]=string[i]+y;
        }
        i++;
    }
    printf("%s",string);
}
