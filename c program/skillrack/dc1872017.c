#include<stdio.h>
int main()
{
    int n;
    char c;
    int i,j;
    scanf("%d",&n);
    char a[n*n];

    for(i=0;i<n*n;i++)
    {
        scanf("%c ",&a[i]);
    }
    for(i=0;i<n*n;i++)
    {
        printf("%c ",a[i]);
    }
}
