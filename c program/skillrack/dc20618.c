#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,total,i,t;
    int slab[100];
    int disc[100];

    scanf("%d %d",&n,&total);
    t=total;
    for(i=0;i<n;i++)
    {
        scanf("%d",&slab[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&disc[i]);
    }
    for(i=0;i<n;i++)
    {
        if(total>slab[i]&&total<slab[i+1])
        {
            t=total-total*disc[i]/100;
        }
    }

    printf("%.2f",(float)t);

}
