#include <stdio.h>
void toWords(int);
void toDigit(int);

void toDigit(int n)
{
    if(n>0)
    {
        toDigit(n/10);
        toWords(n%10);
        printf(" ");
        n /= 10;
    }
}
void toWords(int n)
{
    switch (n)
    {
    case 1:
        printf("one");
        return;
    case 2:
        printf("two");
        return;
    case 3:
        printf("three");
        return;
    case 4:
        printf("four");
        return;
    case 5:
        printf("five");
        return;
    case 6:
        printf("six");
        return;
    case 7:
        printf("seven");
        return;
    case 8:
        printf("eight");
        return;
    case 9:
        printf("nine");
        return;
    case 0:
        printf("zero");
        return;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    toDigit(n);
    return 0;
}
