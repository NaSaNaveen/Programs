#include<stdio.h>
#include <stdlib.h>

int main()
{
    int aflag,bflag;
    int arr[10]= {0};
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    while(n>0)
    {
        arr[n%10]++;
        n=n/10;
    }
    while(a>0)
    {
        if(arr[a%10]==0)
        {
            printf("NO");
            return 0;
        }
        arr[a%10]--;
        a=a/10;
    }
    while(b>0)
    {
        if(arr[b%10]==0)
        {
            printf("NO");
            return 0;
        }
        arr[b%10]--;
        b=b/10;
    }
    printf("YES");
    return 0;
}
