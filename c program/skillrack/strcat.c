#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);

    if(s1[0]>s2[0])
    {
        printf("%s",strcat(s1,s2));
    }
    else
    {
        printf("%s",strcat(s2,s1));
    }
}
