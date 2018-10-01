#include<stdio.h>
int main()
{
    char str[101];
    int charCount[128]= {0},index;
    scanf("%s",str);
    for(index=0; str[index]!='\0'; index++)
    {
        charCount[str[index]]++;
    }
    for(index=0; index<128; index++)
    {
        if(charCount[index]==1)
        {
            printf("%c",index);
        }
    }
}

