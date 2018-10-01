#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int i=0;
    int res=0;
    int n,a,offset;
    char *str=(char *)malloc(100*sizeof(char)),ch;
    scanf("%s",str);
    while(isdigit(str[i]))
    {
        //printf("str[%d]-->%c\n",i,str[i]);
        res=res*10+(str[i++]-48);
        //printf("loop-res-->%d\n",res);
    }
    //i--;
    str=str+i;
    //printf("res-->%d\n",res);
    while(sscanf(str,"%c%d%n",&ch,&n,&offset)>0)
    {
        //printf("%d%c",n,ch);
        switch(ch)
        {
            case '+':
                res=res+n;
                break;
            case '-':
                res=res-n;
                break;
            case '*':
                res=res*n;
                break;
            case '/':
                res=res/n;
                break;
        }
        //printf("\n%d",res);
        str=str+offset;
    }
    printf("%d",res);
}