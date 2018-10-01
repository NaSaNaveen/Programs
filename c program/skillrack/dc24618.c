#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    long int m;
    scanf("%ld %ld ",&n,&m);
    long int a[n];
    long int max=0;
    long int c=0;
    long int l=0;
    long int f=0;
    long int end=0;

    for( long int i=0;i<n;i++)
    {
        scanf("%ld ",&a[i]);
    }

    for(long int i=0;i<n-1;i++)
    {
      if(a[i]==m&&f==0)
      {
          ++i;
          c++;
          f++;
          while(a[i]!=m)
          {
              c++;
              i++;
          }
          if(c>max)
          {
              max=c;
              l=c;
              end=i;
          }
          i--;
          f=0;
          c=0;
      }

    }
    //start=end-c;
    //printf("%d %d ",l,end);
    //for(int i=start+1;i<end;i++)
    for(long int i=end-l+1;i<=end-1;i++)
    {
        printf("%ld ",a[i]);
    }
}
