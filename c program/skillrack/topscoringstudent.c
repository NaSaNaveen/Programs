#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    int total,max=0;
    char x[100],name[100];
    int n;
    scanf("%d",&n);
    while(scanf("%[^\:]:%d:%d:%d",x,&a,&b,&c)>0)
    {
        total=(a+b+c)/3;
        if(total>max)
        {
            max=total;
            strcpy(name,x);
        }
    }
    printf("%s",name);
}

