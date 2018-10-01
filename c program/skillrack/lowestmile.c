#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main()
{
    char name[101],lowName[101];
    double mile,lowMile=INT_MIN;
    while(scanf("%[^@]@%lf",name,&mile)>0)
    {
        if(mile<lowMile)
        {
            //printf("%lf",mile);

            lowMile=mile;
            strcpy(lowName,name);
        }
    }
    printf("%s",lowName);
}
