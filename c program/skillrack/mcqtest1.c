#include<stdio.h>
#define A 0x01
#define B 0x02
int main()
{
    unsigned char input = 0x00;
    input |= A;
    input |= B;
    if(input & A)
    {
        printf("A");
    }
    if(input & B)
    {
        printf("B");
    }
}
