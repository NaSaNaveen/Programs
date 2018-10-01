
#include<stdio.h>
int main()
{
    char str[100];
    int len,digit,i,index,j,k;

    fgets(str,100,stdin);
    len=strlen(str)-1;

    index=0;
    for(i=0;i<=len;i++)
    {
        if(isdigit(str[i]))
        {
            digit=str[i]-48;
            for(j=index;j<i;j++)
            {
                for(k=1;k<=digit;k++)
                {
                    printf("%c",str[j]);
                }
            }
            index=i+1;
        }
    }
}
