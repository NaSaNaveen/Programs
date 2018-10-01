#include<stdio.h>
int fg(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            printf("a-->%d b-->%d\n",a,b);
            return fg(a-b,b);
        }
        else
        {
            printf("a-->%d b-->%d\n",a,b);
            return fg(a,b-a);
        }
    }
    printf("a-->%d b-->%d\n",a,b);
    return a;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=fg(a,b);
    printf("%d",c);
}
