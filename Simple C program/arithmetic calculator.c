#include<stdio.h>
int main()
{
    char o;
    int a,b;
    scanf("%d%c%d",&a,&o,&b);
    switch(o)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a%b);
            break;
    }
}

