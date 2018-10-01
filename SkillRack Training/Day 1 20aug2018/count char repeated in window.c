#include<stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0;
    int i,j;
    int count=0;
    int n;
    char s[1000001];
    scanf("%s",s);
    scanf("%d",&n);
    int len = strlen(s);
    for(i=0; s[i]!='\0'; i++)
    {
        flag=0;
        int l=(n+i)>len?len:n+i;
        //printf("Forward: next-->%d  char-->%d\n",l,i);
        for(j=i+1; j<=l; j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
                count++;
                //printf("count-->%d\n",count);
            }
        }
        if(flag==0)
        {
            int k=(i-n)<0?0:i-n;
            //printf("Previous: prev-->%d  char-->%d\n",k,i);
            for(j=i-1; j>=k; j--)
            {
                if(s[i]==s[j])
                {
                    count++;
                    //printf("count-->%d\n",count);
                }
            }
        }
    }
    printf("%d",count);
}
