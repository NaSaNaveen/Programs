#include<stdio.h>
#include <stdlib.h>

int main()
{
    float speed=0,timetaken=0,speedsum=0,timesum=0,avg=0;
    while(scanf("%f@%f",&speed,&timetaken)>0)
    {
        speedsum+=speed;
        timesum+=timetaken;
    }
    avg=speedsum/timesum;
    printf("%.2f",avg);
}
