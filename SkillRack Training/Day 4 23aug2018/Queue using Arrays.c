#include<stdio.h>
#define max 5
int queue[1000],front=0,rear=0;
void insert(int data)
{
    queue[rear++]=data;
}
int poll()
{
    return queue[front++];
}
void display()
{
    int index;
    for(index=front; index<rear; index++)
    {
        printf("%d ",queue[index]);
    }
    printf("\n");
}
int main()
{
    int value,choice;
    while(1)
    {
        //printf("front-->%d, rear-->%d\n",front,rear);
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(rear==max)
            {
                printf("Queue is Full\n");
                break;
            }
            scanf("%d",&value);
            insert(value);
            break;

        case 2:
            if(front==rear)
            {
                front = 0;
                rear = 0;
                printf("Queue is Empty\n");
                break;
            }
            printf("%d\n",poll());
            break;

        case 3:
            if(front == rear )
            {
                printf("Queue is Empty\n");
                break;
            }
            display();
            break;

        case 0:
            printf("....................");
            return 0;

        default:
            printf("Invalid Operation, Try Again\n");
        }
    }
}
