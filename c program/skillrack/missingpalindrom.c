#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int len,j,i,start=0,end=0;
    scanf("%s",str);
    len=strlen(str);

    end=len-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {

            if((str[start]==str[end-1]))
            {
                if((end-1>start))
                {
                     printf("%c",str[end]);
                     break;
                }
            }

            if(str[start+1]==str[end])
            {
                printf("%c",str[start]);
                break;
            }
        }
        start++;
        end--;
    }
}

//animallotsfliateddetailofstoollamina
//
