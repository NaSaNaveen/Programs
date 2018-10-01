#include<stdio.h>
#include <stdlib.h>

int main()
{
    int startRange,endRange,primeCount=0;
    int i,flag=0,range,control;
    scanf("%d",&startRange);
    scanf("%d",&endRange);

    if(endRange<2)
    {
        printf("%d",primeCount);
    }

    else
    {
        if(startRange%2==0)
        {
            startRange++;
        }
        for(range=startRange;range<=endRange;range+=2)
        {
            flag=0;
            for(i=2;i<range;i++)
            {
                if(range%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                primeCount++;
            }
        }
    printf("%d",primeCount);
    }
}
