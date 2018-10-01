#include<stdio.h>
#include <stdlib.h>

int main()
{
    int l1,l2,i,j,distCount=0,flag=0;;
    int arrayl1[50],arrayl2[50];
    scanf("%d %d",&l1,&l2);
    for(i=0;i<l1;i++)
    {
        scanf("%d",&arrayl1[i]);
    }
    for(i=0;i<l2;i++)
    {
        scanf("%d",&arrayl2[i]);
    }

    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            printf("\n%d %d",arrayl1[i],arrayl2[j]);
            if(arrayl1[i]==arrayl2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            distCount+=1;
        }
    }

    printf("\n\n%d",distCount);
}
