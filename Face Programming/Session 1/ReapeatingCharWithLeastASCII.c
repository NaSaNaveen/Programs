#include<stdio.h>
int main()
{
    char str[10001];
    int charCount[128]= {0},index,max=0;
    scanf("%s",str);
    for(index=0; str[index]!='\0'; index++)
    {
        charCount[str[index]]++;
        if(charCount[str[index]]>max)
        {
            max=charCount[str[index]];
        }
    }
    //printf("max-->%d\n",max);
    for(index=0; index<128; index++)
    {
        if(charCount[index]==max)
        {
            printf("%c",index);
            break;
        }
    }
}
