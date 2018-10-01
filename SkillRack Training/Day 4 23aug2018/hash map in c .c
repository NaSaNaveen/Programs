#include<stdio.h>
#define SIZE 100
struct student
{
    char str[SIZE];
    int mark;

}table[SIZE];

int hash(char str[])
{
    int index,key=1;
    for(index=0;str[index]!='\0';index++)
    {
        key=(key*2)+str[index];
    }
    return key%SIZE;
}

int main()
{
    int maxMarks=0,maxKey;
    int n,key,marks;
    char name[SIZE];
    scanf("%d",&n);
    int *flag = (int *)calloc(SIZE,sizeof(int));
    for(int index=0; index<n; index++)
    {
        scanf("%s %d",name,&marks);
        key=hash(name);
        if(flag[key]==0)
        {
            strcpy(table[key].str,name);
            table[key].mark=marks;
            flag[key]=1;
        }
        else
        {
            table[key].mark+=marks;
        }
        if(table[key].mark>maxMarks)
        {
            maxMarks=table[key].mark;
            maxKey = key;
        }
    }
    //scanf("%s",name);
    //printf("%d",table[key].mark);
    printf("%s",table[maxKey].str);
    free(flag);
}
