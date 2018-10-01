#include<stdio.h>
#include<ctype.h>
int main()
{
    int r,c;
    char lr;
    scanf("%d %d",&r,&c);
    char a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("\n%c",&a[i][j]);
        }
    }
    scanf("\n%c",&lr);
    if(tolower(lr)=='l')
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(isalpha(a[i][j]))
                {
                    printf("%c",a[i][j]);
                    break;
                }
            }
        }
    }
    if(tolower(lr)=='r')
    {
        for(int i=0; i<r; i++)
        {
            for(int j=c-1; j>=0; j--)
            {
                if(isalpha(a[i][j]))
                {
                    printf("%c",a[i][j]);
                    break;
                }
            }
        }
    }
}
