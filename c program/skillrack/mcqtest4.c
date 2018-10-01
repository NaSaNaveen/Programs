#include<stdio.h>
int main()
{
    int x=1;
    int y=(x++,x++,x++);
    printf("%d %d",x,y);

}
