#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n>0)
    {
        //print(n-1);
        printf("%d ",n);
        print(n-1);
    }
}
