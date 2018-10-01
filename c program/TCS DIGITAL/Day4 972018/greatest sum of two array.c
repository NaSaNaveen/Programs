#include<stdio.h>
int main()
{
    int array1[100],array2[100];
    int i,j,n,m,commoniIndex,commonjIndex;
    int sum1=0,sum2=0,sum=0,x,y,a=0,b=0;

    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&array2[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum1=0;
            sum2=0;

            if(array1[i]==array2[j])
            {
                commoniIndex=i;
                commonjIndex=j;

                for(x=a;x<=commoniIndex;x++)
                {
                    sum1=sum1+array1[x];
                }
                for(y=b;y<=commonjIndex;y++)
                {
                    sum2=sum2+array2[y];
                }
                a=x;
                b=y;
                if(sum1>sum2)
                {
                    sum=sum+sum1;
                }
                else
                {
                    sum=sum+sum2;
                }
            }
        }
    }
    sum1=0;sum2=0;
    for(i=a;i<n;i++)
    {
        sum1=sum1+array1[i];
    }
    for(j=b;j<m;j++)
    {
        sum2=sum2+array2[j];
    }
    if(sum1>sum2)
    {
        sum=sum+sum1;
    }
    else
    {
        sum=sum+sum2;
    }
    printf("%d",sum);
}
