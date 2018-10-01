#include<stdio.h>
struct Scope
{
    union st
    {
        char alpha;
        int num;
    };
};

int main()
{
    struct Scope x;
    scanf("%d",&x.num);
    printf("%c %d", x.alpha, x.num);
    return 0;
}
