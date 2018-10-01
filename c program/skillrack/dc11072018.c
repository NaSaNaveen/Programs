#include<stdio.h>
int main()
{
    int n;
    int i,j;
    char ch='a';
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n+n-1;j++)
        {
            if(i%2!=0)
            {
                if(j%2==0)
                {
                    printf("*");
                }
                else
                {
                    if(ch>'z')
                    {
                        ch='a';
                    }
                    printf("%c",ch);
                    ch++;
                }
            }
            else
            {
                if(j%2==0)
                {
                    if(ch>'z')
                    {
                        ch='a';
                    }
                    printf("%c",ch);
                    ch++;
                }
                else
                {
                    printf("*");
                }
            }

        }
        printf("\n");
    }
}
