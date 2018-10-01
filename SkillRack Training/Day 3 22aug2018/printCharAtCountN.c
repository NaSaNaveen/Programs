#include<stdio.h>
int main()
{
    int i=0,count=0,printCount=0;
    int n;
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    scanf("%d",&n);
    while(printCount<len)
    {
        if(str[i]!='*')
        {
            count++;
            if(count==n)
            {
                printCount++;
                printf("%c",str[i]);
                str[i]='*';
                count=0;
            }
        }
        i=(i+1)%len;
    }
}
