#include<stdio.h>
int main()
{
    int x=5,y=5;
    x=++x;
    y=--y;
    int z=x++ + y--;
    printf("%d",z);
}
