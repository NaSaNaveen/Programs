#include<stdio.h>
int main()
{
    int num=0;
    int n;
    int a[100]={0};
    int i=0,j,k,temp;
    scanf("%d",&n);
    while(n>0)
    {
        a[i++]=(n%10);
        n=n/10;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]<a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        //printf("%d",a[j]);
        num=num*10+a[j];
    }
    printf("%d",num);
}
