#include<stdio.h>
#include <stdlib.h>

int main()
{
    int index,i;
    int charCount[128]= {0};
    int n;
    scanf("%d",&n);
    char s[100001];
    for(index=0; index<n; index++)
    {
        scanf("%s",s);
        int charFlag[128]= {0};
        //for()
        {
            if((charCount[s[index]]==index || charCount[s[index]] == index-1)&&(charFlag[s[index]] == 0))
            {
                charCount[s[index]]++;
                charFlag[s[index]]=1;
            }
        }
    }
    for(index=0; index<128; index++)
    {
        if(charCount[index]>=n-1)
        {
            printf("%c",index);
        }
    }
}
