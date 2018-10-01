#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[200],x,y;
    int count=0,i,j,len;

    scanf("%s %c %c",str,&x,&y);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==x && str[i+1]==y)
        {
            printf("%c %c\n",str[i],str[i+1]);
            count++;
        }
    }
    printf("%d",count);
}
