#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100];
    int len1,len2,i,j,k=1,index;

    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);

    printf("%s\n",str1);

    for(i=len1-1;i>=0;i--)
    {
        if(str2[0]==str1[i])
        {
            index=i;
            break;
        }
    }
    for(i=0;i<len2-1;i++)
    {
        for(j=0;j<len1;j++)
        {
            if(j==index)
            {
                printf("%c",str2[k]);
                k++;
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}
