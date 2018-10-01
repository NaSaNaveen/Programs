#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1[10]={0},flag=0;
    int m,flag=1;
    scanf("%d",&n);
    scanf("%d",&m);
    while(n>0){
         n1[n%10]++;
         n=n/10;
    }
    while(m>0){
         n1[m%10]--;
         if(n1[m%10]<0){
             flag=0;
         }
         m=m/10;
    }
    if(flag)printf("YES");
    else printf("NO");

}
