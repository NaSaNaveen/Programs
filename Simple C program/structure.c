#include<stdio.h>
struct employee
{
    int eid;
    char ename[20];
    int salary;
    int da,hra,pf,gp,np;
}e[100];
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&e[i].eid);
        scanf("%s",&e[i].ename);
        scanf("%d",&e[i].salary);
        scanf("%d",&e[i].da);
        scanf("%d",&e[i].hra);
        scanf("%d",&e[i].pf);
    }
    for(i=0;i<n;i++)
    {
        e[i].gp=e[i].salary+e[i].da+e[i].hra;
        e[i].np=e[i].gp-e[i].pf;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",e[i].eid);
        printf("%s\n",e[i].ename);
        printf("%d\n",e[i].salary);
        printf("%d\n",e[i].da);
        printf("%d\n",e[i].hra);
        printf("%d\n",e[i].pf);
        printf("%d\n",e[i].gp);
        printf("%d\n",e[i].np);
    }
}
