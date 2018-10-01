#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],tempChar;
    int len,i=0,j=0,k=0;
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]>str[j])
            {
                tempChar=str[i];
                str[i]=str[j];
                str[j]=tempChar;
            }
        }
    }
    printf("%s",str);
}
