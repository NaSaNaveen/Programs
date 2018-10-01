#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,control,flag=1;
    scanf("%d",&n);
    control=sqrt(n);

    for(i=2;i<control;i++)
    {
        if(n%i==0)
        {
            flag=0;
            printf("NO");
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
}
