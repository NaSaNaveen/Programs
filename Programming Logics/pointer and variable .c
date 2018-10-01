#include<stdio.h>
int main()
{
    int *ptr1,*ptr2;
    int i=10,j=10;
    ptr1=&i;
    ptr2=&j;
    if(ptr1==ptr2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
