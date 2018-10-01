#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nextNode;

}*head,*tail;

void insert(int value)
{
    struct node *newNode = malloc(sizeof(newNode));
    newNode->data=value;
    newNode->nextNode=NULL;

    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        newNode->nextNode=NULL;
        tail->nextNode=newNode;
        tail=newNode;
    }
}

void display()
{
    while(head!=NULL)
    {
        printf("%d-> ",head->data);
        head=head->nextNode;
    }
}

int main()
{
    head=tail=NULL;
    int value;
    while(scanf("%d",&value)>0)
    {
        insert(value);
    }
    display();
}
