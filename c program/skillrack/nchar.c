#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char a;
    int n,i;
    scanf("%c %d",&a,&n);

    if(islower(a))
    {
        for(i=0;i<n;i++)
        {
            printf("%c",a);
            if(a+1==123)
            {
                a='a';
            }
            else
            {
                a=a+1;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("%c",a);
            if(a+1==91)
            {
                a='A';
            }
            else
            {
                a=a+1;
            }
        }
    }
}
