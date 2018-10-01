#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
   char s[100];
   scanf("%s",s);
   int len = strlen(s);
   for(i=0;i<len;i++)
       if(isdigit(s[i]))
         sum+=(s[i]-'0');
         printf("\n%d \n",sum);
   sum%=26;
   printf("\n%d\n",sum);
   for(i=0;i<len;i++)
       if(isalpha(s[i])){
           s[i] = tolower(s[i]);
       printf("%c",s[i]);
//           if(s[i]+sum<='z'){
//               printf("%c",s[i]+sum);
//           }else{
//               printf("%c",((s[i]+sum)-26));
//           }
       }

}
