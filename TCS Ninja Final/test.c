#include<stdio.h>
#include<dos.h>

int main(int arc, char *arv[])
{
    int i;
    for(i=1; i<arc; i++)
        printf("%s ", arv[i]);
    return 0;
}