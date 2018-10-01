#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count=0,alpha[26]={0};
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        alpha[s1[i]-97]++;
    }

    for(i=0;s2[i]!='\0';i++)
    {
        if(alpha[s2[i]-97]>0)
        {
            count++;
            alpha[s2[i]-97]=0;
        }
    }
    printf("%d",count);
}
