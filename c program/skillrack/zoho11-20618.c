#include<stdio.h>
#include <stdlib.h>
int main()
{
    int d1,d2,N, i ,a, b, c=0,max ,m = 0,n=0;
    scanf ("%d%d%d",&d1,&d2,&N);
    max =d1>d2?d1:d2;
    for(i=max +1;;i++)
    {
        a=i ;
        while (1)
        {
            b=a%10;
            a=a/10;
            if (b!=d1 && b!=d2)
            break ;

            if (b==d1)
            m=1;

            if (b==d2)
            n=1;

            if (a==0&&m==1&&n==1)
            {
                c++;
                break ;
            }
            else if(a==0)
                break ;
        }
        m=0;
        n=0;

        printf("%d\n",i);
        if(c==N)
        break ;
    }
    printf("%d",i );
    return 0;
}
