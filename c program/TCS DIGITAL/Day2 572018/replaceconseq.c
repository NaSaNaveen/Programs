#include<stdio.h>
int main()
{
    int n,i;
    int pos;
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    pos=0;
    for(i=0;i<n;i++)
    {
        array[pos]=array[i];
        pos++;
        while(pos > 1 && array[pos-2]==array[pos-1])
        {
            pos--;
            array[pos-1]++;
        }
    }

    for(i=0;i<pos;i++)
    {
        printf("%d ",array[i]);
    }
}
