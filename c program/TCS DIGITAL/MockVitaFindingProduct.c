/*#include<stdio.h>
long long int count =0;
long long int check(long long int value,long long int prd)
{
    //printf("\nfunc--%d %d",value,prd);
    if(!(value%prd))return 1;
    return 0;
}
long long int combination(long long int arr[50],long long int checkvalue,long long int prd,long long int i,long long int n)
{
    long long int j,tempPRD;
    if(i<n-1)
    {
        prd *=arr[i];
        tempPRD = prd;
        // printf("\n bow -- %d %d ",i,prd);
        for(j=i+1; j<n; j++)
        {
            prd *= arr[j];

            if(check(prd,checkvalue))count++;
            //printf("\n %d %d %d %d %d %d",i,j,arr[j],prd,check(prd,checkvalue),count);
            prd = tempPRD;

        }
        combination(arr,checkvalue,prd,++i,n);
    }
    return 0;
}
int main()
{
    long long int n,p,q,i=0,j=0,sum=1;
    char c;
    scanf("%d,%d,%d",&n,&p,&q);
    long long int arr[n];
    for(i=0; i<n-1; i++)
        scanf("%d%c",&arr[i],&c);
    scanf("%d",&arr[i]);
    for(i=0; i<n; i++)
        combination(arr,p*q,1,i,n);
    printf("%d",count);
}
*/
#include<stdio.h>
long long int count =0;
long long int combination(long long int arr[50],long long int checkvalue,long long int prd,long long int i,long long int n)
{
    long long int j,tempPRD;
    if(i<n-1)
    {
        prd *=arr[i];
        tempPRD = prd;
        for(j=i+1; j<n; j++)
        {
            prd *= arr[j];
            if(!(prd%checkvalue))
            {
                count++;
            }
            prd = tempPRD;
        }
        combination(arr,checkvalue,prd,++i,n);
    }
    return 0;
}
int main()
{
    long long int n,p,q,i=0,j=0,sum=1;
    char c;
    scanf("%lld,%lld,%lld",&n,&p,&q);
    long long int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld%c",&arr[i],&c);
    }
    for(i=0; i<n; i++)
    {
        combination(arr,p*q,1,i,n);
    }
    printf("%lld",count%1009);
}
