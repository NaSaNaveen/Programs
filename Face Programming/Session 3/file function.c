#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("Nasa.txt","w+");
    fprintf(f,"hi, this is nasa");
    printf("The file pointer is at position %d",ftell(f));
    fclose(f);
}
