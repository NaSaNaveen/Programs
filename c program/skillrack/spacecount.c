#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,count=0;
    char s[100];
    fgets(s,100,stdin);



    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",count+1);
}
