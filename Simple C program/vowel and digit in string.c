#include<stdio.h>
int main()
{
    int i;
    int vowel=0,digit=0;
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        switch(str[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowel++;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            digit++;
            break;
        }
    }
    printf("Vowel = %d\n",vowel);
    printf("Digit = %d",digit);
}
