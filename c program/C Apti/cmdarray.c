#include<stdio.h>
#include<stdlib.h>
int main(int count, char *array[])
{
    for(int i=1;i<count;i++)
    {
        printf("%d ",atoi(array[i]));
    }
}