#include<stdio.h>
#include<math.h>

int main()
{
    int N;
    scanf("%d",&N);
    int index=2,maxPowerCount=1,primeFactor;
    for(index=2; index<=sqrt(N); index++)
    {
        int powerCount=0;
        while(N%index==0)
        {
            N/=index;
            powerCount++;
        }
        if(powerCount>=maxPowerCount)
        {
            maxPowerCount=powerCount;
            primeFactor=index;
        }
    }
    if(maxPowerCount==1)
    {
        primeFactor=N;
    }
    printf("%d",primeFactor);
}
