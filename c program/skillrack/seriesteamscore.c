#include<stdio.h>
#include <stdlib.h>

int main()
{
    int teamA[100],teamB[100],aScore,bScore;
    int ta=0,tb=0,i;

    while(scanf("%d",&teamA[ta])>0)
    {
        ta++;
    }
    /*for(tb=0;tb<ta;tb++)
    {
        scanf("%d",&teamB[tb]);
    }*/

    for(i=0;i<ta;i++)
    {
        printf("%d\t",teamA[i]);
    }
}
