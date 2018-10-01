#include<stdio.h>
int main()
{
    char *ptr;
    strcpy(ptr,"HelloWorld");
    func(&ptr);
    func(&ptr);
    printf("%s",ptr);
}
void func(char *p)
{
    p++;
}
