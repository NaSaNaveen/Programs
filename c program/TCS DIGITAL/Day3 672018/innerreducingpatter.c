#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int size=2*n-1;
    int front=0;
    int back = size-1;
    int a[100][100];
    int i,j;

    while(n!=0)
    {
        for(i=front;i<=back;i++)
        {
            for(j=front;j<=back;j++)
            {
                if(i==front||i==back||j==front||j==back)
                {
                    a[i][j]=n;
                    printf("%d",n);
                }
            }
            printf("\n");
        }
        front++;
        back--;
        n--;
    }

    /*for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }*/
}
