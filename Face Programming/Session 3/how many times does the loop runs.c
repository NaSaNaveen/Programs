#include<stdio.h>
int main()
{
    int x=1;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5;j++)
        {
            printf("%d ",x++);
        }
    }
}
