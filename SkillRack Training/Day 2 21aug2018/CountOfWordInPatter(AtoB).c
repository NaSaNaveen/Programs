#include<stdio.h>
int main()
{
    int i,j,count=0,flag=1;
    char str[1001];
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        flag=1;
        if(str[i]=='a')
        {
            for(j=i+2;j<len;j++)
            {
                if(!isalpha(str[j-1]))
                {
                    flag=0;
                }
                if(flag)
                {
                    if(str[j]=='b')
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
}
