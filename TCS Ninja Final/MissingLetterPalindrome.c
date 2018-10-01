#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count=0,i=0;
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    int end = len - 1;
    //printf("len-->%d count-->%d end-->%d",len,count,end);
    int start = 0;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            if (str[start] == str[end - 1])
            {
                if (end - 1 > start)
                {
                    printf("%c", str[end]);
                    break;
                }
            }
            if (str[start + 1] == str[end])
            {
                printf("%c", str[start]);
                break;
            }
        }
        start++;
        end--;
    }
}