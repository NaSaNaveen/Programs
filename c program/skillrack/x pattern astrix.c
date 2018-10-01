#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i,j,k=0;
    scanf("%d",&n);
    for(i=1; i<=(2*n)-1; i++)
    {
        if(i>n)
        {
            k=k+2;
        }
        for(j=1; j<=(2*n)-1; j++)
        {
            if(j==i || j==(2*n)-i)
            {
                if(i>n)
                {
                    printf("%d",i-k);
                }
                else
                {
                    printf("%d",i);
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
