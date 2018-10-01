#include<stdio.h>
#include <stdlib.h>

int main()
{
    char day[5];
    int date,resultDate,oddDays,x=0;
    scanf("%s",day);
    scanf("%d",&date);

        if(strcmp(day,"MON")==0)
        {
            x=1;
        }
        if(strcmp(day,"TUE")==0)
        {
            x=2;
        }
        if(strcmp(day,"WED")==0)
        {
            x=3;
        }
        if(strcmp(day,"THU")==0)
        {
            x=4;
        }
        if(strcmp(day,"FRI")==0)
        {
            x=5;
        }
        if(strcmp(day,"SAT")==0)
        {
            x=6;
        }
        if(strcmp(day,"SUN")==0)
        {
            x=0;
        }

    oddDays=date%7+x;
    resultDate=oddDays%7;
    switch(resultDate)
    {
        case 1:
            printf("SUN");
            break;
        case 2:
            printf("MON");
            break;
        case 3:
            printf("TUE");
            break;
        case 4:
            printf("WED");
            break;
        case 5:
            printf("THU");
            break;
        case 6:
            printf("FRI");
            break;
        case 0:
            printf("SAT");
            break;
    }
}
