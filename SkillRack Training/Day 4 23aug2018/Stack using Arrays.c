#include<stdio.h>
#define max 999
int stack[1000],top=-1;
void push(int data)
{
    if(top==max)
    {
        printf("Stack is Full\n");
        return 0;
    }
    stack[++top]=data;
}
int pop()
{
    return stack[top--];
}
int peek()
{
    return stack[top];
}
void display()
{
    int index;
    for(index=0; index<=top; index++)
    {
        printf("%d ",stack[index]);
    }
    printf("\n");
}
int main()
{
    int value,choice;
    while(1)
    {
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            scanf("%d",&value);
            push(value);
            break;

        case 2:
            if(top == -1)
            {
                printf("Stack is Empty\n");
                break;
            }
            printf("%d\n",pop());
            break;

        case 3:
            printf("%d\n",peek());
            break;

        case 4:
            display();
            break;

        case 0:
            printf("....................");
            exit(0);

        default:
            printf("Invalid Operation, Try Again\n");
        }
    }
}
