#include<stdio.h>
int main()
{
    int n;
    int i,j,x=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("* ");
            }
            else
            {
                if(i==((n/2)+1)&&j==((n/2)+1))
                {
                    printf("* ");
                }
                else
                {
                    printf("%d ",x);
                    x++;
                }
            }
        }
        printf("\n");
    }
}

/*11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55*/
