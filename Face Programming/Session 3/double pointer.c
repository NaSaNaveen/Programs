#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q,**pp,**qq;
    p=&a;
    q=&b;
    pp=&p;
    qq=&q;
    printf("**pp-->%d\n**qq-->%d\n*p-->%d\n*q-->%d\n",**pp,**qq,*p,*q);
    printf("pp-->%d\nqq-->%d\np-->%d\nq-->%d\n",pp,qq,p,q);
    printf("a-->%d\nb-->%d\n&a-->%d\n&b-->%d\n",a,b,&a,&b);
}
