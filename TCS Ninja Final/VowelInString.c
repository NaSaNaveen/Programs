#include<stdio.h>
int main()
{
    int count=0;
    char str[1001],c;
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        c=str[i];
        if(c>='A'&& c<='Z')
        {
            c=str[i]+32;
        }
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            count++;
            printf("%c ",str[i]);
        }
    }
    printf("\n%d",count);
}