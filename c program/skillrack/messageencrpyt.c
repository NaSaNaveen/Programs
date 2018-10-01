#include<stdio.h>
int main()
{
    char str[100];
    int array[100];
    int i,j,n,len,count=0;
    int flag=0;
    scanf("%s",str);
    scanf("%d",&n);

    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(flag==0)
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==n)
        {
            flag=1;
        }
        if(count==1)
        {
            flag=0;
        }

        array[i]=count;
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<len;j++)
        {
            if(array[j]==i)
            {
                printf("%c",str[j]);
            }
        }
    }
}
