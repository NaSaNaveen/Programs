#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prevNode;
    int data;
    struct node *nextNode;

}*head,*tail;

void insert(int value)
{
    struct node *newNode = malloc(sizeof(newNode));
    newNode->data=value;
    newNode->nextNode=NULL;
    newNode->prevNode=NULL;

    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        newNode->prevNode=tail;
        tail->nextNode=newNode;
        tail=newNode;
    }
}

void display()
{
    printf("Reverse Traversal:\n");
    while(tail!=NULL)
    {
        printf("%d-> ",tail->data);
        tail=tail->prevNode;
    }
    printf("\nForward Traversal:\n");
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
