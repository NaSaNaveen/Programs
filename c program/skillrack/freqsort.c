#include<stdio.h>
int main()
{
    long long int array[30],i,j,temp;
    long long int num,n=0;
    scanf("%lld",&num);
    while(num>0)
    {
        array[n]=num%10;
        num=num/10;
        n++;
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int count[n];
    for(i=0; i<n; i++)
        count[i]=1;
    for(i=0; i<n; i++)
    {
        if(array[i]==array[i+1])
        {
            count[i+1]=count[i]+1;
            count[i]=-1;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(count[i]<count[j])
            {
                temp=count[i];
                count[i]=count[j];
                count[j]=temp;

                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }

            else if(count[i]==count[j])
            {
                if(array[i]>array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(count[i]>=1)
        {
            for(j=1; j<=count[i]; j++)
                printf("%lld",array[i]);
        }
    }
}
