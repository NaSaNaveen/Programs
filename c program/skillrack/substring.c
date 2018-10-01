#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int len1,len2;
    int i,j,k=1,flag=0,index=-1;
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    len1=strlen(s1);
    len2=strlen(s2);

    for(i=0;i<len1;i++)
    {
        if(s1[i]==s2[0])
        {
            k=1;
            for(j=i+1;j<len1;j++)
            {
                if(s1[j]==s2[k])
                {
                    index=i;
                }
                k++;
            }
        }
    }
    printf("%d",index);
}
