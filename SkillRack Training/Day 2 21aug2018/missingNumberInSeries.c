#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    int first , second , next;
    scanf("%d",&first);
    scanf("%d",&second);
    for(i=3;i<=n;i++)
    {
        scanf("%d",&next);
        if(second-first != next -second)
        {
            printf("%d",(first+next)-second);
            break;
        }
        first=second;
        second=next;
    }
}
