#include<stdio.h>
int main()
{
    int a ,b;
    scanf("%d %d",&a,&b);
    printf("Before Swap: a=%d b=%d\n",a,b);
    swap(a,b);
    printf("After Swap : a=%d b=%d\n",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("In Swap function: a=%d b=%d\n",a,b);
}
