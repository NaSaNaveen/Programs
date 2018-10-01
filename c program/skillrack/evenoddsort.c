#include<stdio.h>

void main()
{
    int N;
    scanf("%d",&N);

    int values[N];
    int index;

    int odd[N],even[N],o=0,e=0,i,j,temp;
    for(index=0;index<N;index++)
    {
        scanf("%d",&values[index]);
    }
    for(index=0;index<N;index++)
    {
        if(values[index]%2!=0)
        {
            odd[o]=values[index];
            o++;
        }
        else
        {
            even[e]=values[index];
            e++;
        }
    }
    printf("%d %d\n",o,e);
    for(i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }
    for(i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");

    for(i=0;i<o;i++)
    {
        for(j=i+1;j<o;++j)
        {
            if(odd[i]>odd[j])
            {
                temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }
    }
    for(i=0;i<e;i++)
    {
        for(j=i+1;j<e;++j)
        {
            if(even[i]>even[j])
            {
                temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }

    for(i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }
    for(i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }

}//end of main method
