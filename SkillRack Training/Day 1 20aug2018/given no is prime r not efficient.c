#include<stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Yes, Prime");
    return 0;
}
