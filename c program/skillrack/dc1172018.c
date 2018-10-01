#include<stdio.h>
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n+n-1;j++)
        {
            if(i%2!=0 && j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}
