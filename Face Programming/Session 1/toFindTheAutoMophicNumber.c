#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int square = n*n;
    while(n>0)
    {
        if(square%10!=n%10)
        {
            printf("Not Auto Morphic Number");
            return 0;
        }
        n=n/10;
        square=square/10;
    }
    printf("Auto Morphic Number");
}
