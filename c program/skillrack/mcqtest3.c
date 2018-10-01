#include<stdio.h>
int func(int);
int main()
{
    int a = 10;
    printf("%d",func(a++));
}
int func(int var)
{
    var = ~var^~4;
    return ++var;
}
