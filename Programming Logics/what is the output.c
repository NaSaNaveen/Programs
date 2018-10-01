#include<stdio.h>
int main()
{
    printf("%d",fun(11));
}
int fun(int n)
{
    printf("n-->%d\n",n);
    if(n<=1)
    {
        printf("n<=1 -->%d\n",n);
        printf("return\n");
        return;
    }
    if(n%2==0)
    {
        printf("n%2 -->%d\n",n);
        return fun(n/2);
    }

    printf("n/2-->%d\t(n/2)+1-->%d\n",n/2,(n/2)+1);
    return fun(n/2)+fun((n/2)+1);
}
