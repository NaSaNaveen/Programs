#include<stdio.h>
#include<stdlib.h>

void merge(int[],int,int[],int,int[]);
int main()
{
    int a[100],b[100],m,n,c,sorted[100];
    int i=0,j=0;
    char ch;

    do
    {
        scanf("%d%c",&a[m],ch);
        i++;
    }
    while(ch!='\n');

    do
    {
        scanf("%d%c",&b[j],ch);
        j++;
    }
    while(ch!='\n');

    merge(a,i,b,j,sorted);
}
void merge(int a[], int m, int b[], int n, int sorted[])
{
  int i, j, k;
  j = k = 0;

  for (i = 0; i < m + n;)
  {
    if (j < m && k < n)
    {
      if (a[j] < b[k])
      {
        sorted[i] = a[j];
        j++;
      }
      else
      {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m)
    {
      for (; i < m + n;)
      {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else
    {
      for (; i < m + n;)
      {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}
