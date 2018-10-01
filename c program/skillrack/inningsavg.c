#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,score1[10][10],score2[10][10],n;
    float sum1=0.0,sum2=0.0;
    while(scanf("%d %d",&score1[i][0],&score2[i][1])>0)
    {
        i++;
    }



    for(j=0;j<i;j++)
    {
        sum1=sum1+score1[j][0];
        sum2=sum2+score2[j][1];
    }
    printf("%.2f\n",sum1/i);
    printf("%.2f",sum2/i);
}
