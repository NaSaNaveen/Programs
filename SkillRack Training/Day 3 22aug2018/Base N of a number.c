#include<stdio.h>
char value[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{
    unsigned long long int n,base;
    scanf("%llu %llu",&n,&base);
    if(n==0)
    {
        printf("0");
        return 0;
    }
    baseofn(n,base);
}
void baseofn(unsigned long long int n,unsigned long long int base)
{
    if(n>0)
    {
        baseofn(n/base,base);
        printf("%c",value[n%base]);
    }
}
