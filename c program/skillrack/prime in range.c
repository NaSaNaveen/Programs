#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int endRange;
    int i,j,flag=0;
    scanf("%d",&endRange);

    for(i=2;i<=endRange; i++)
    {
        flag=0;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}
