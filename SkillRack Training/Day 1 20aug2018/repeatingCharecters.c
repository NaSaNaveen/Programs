
#include<stdio.h>
int main()
{
    char str[101];
    int charCount[128]= {0},index;
    scanf("%s",str);
    for(index=0; str[index]!='\0'; index++)
    {
      //if(++charCount[str[index]] == 2) ---- alternate code for below line
        if(charCount[str[index]]++ == 1)
        {
            printf("%c",str[index]);
        }
    }
}

