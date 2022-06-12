// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 5

// int front = -1, rear = -1, q[SIZE];

// int isFull()
// {
//     if (front == (rear + 1) % SIZE)
//         return 1;
//     return 0;
// }

// void push(int elem)
// {
//     if (isFull())
//     {
//         printf("Overflow!!");
//         return;
//     }
//     if (front == -1)
//         front = 0;
//     rear = (rear + 1) % SIZE;
//     q[rear] = elem;
// }

// int pop()
// {
//     int elem;
//     if (front == -1)
//         printf("Underflow!!");
//     else
//     {
//         elem = q[front];
//         front = (front + SIZE - 1) % SIZE;
//         if (front == rear)
//             front = rear = -1;
//     }
//     return elem;
// }

// void display()
// {
//     printf("front-> |");
//     for (int i = front; i != rear; i++)
//     {
//         printf("%d|", q[i]);
//     }
//     printf("%d| <-rear\n", q[rear]);
// }

// int main()
// {
//     push(5);
//     push(3);
//     push(2);
//     push(1);
//     display();
//     printf("pop: %d", pop());
//     return 0;
// }

// queues with linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} NODE;

NODE *front = NULL, *rear = NULL;

void PUSH(int elem);
int POP();
void DISPLAY();

void PUSH(int elem)
{
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));
    p->data = elem;
    p->link = NULL;
    if (rear == NULL)
        front = rear = p;
    else
    {
        rear->link = p;
        rear = p;
    }
}

int POP()
{
    NODE *p;
    if (front == NULL)
        printf("UNDERFLOW!!");
    int elem = front->data;
    if (front == rear)
        rear = NULL;
    p = front;
    front = front->link;
    p->link = NULL;
    free(p);
    return elem;
}

void DISPLAY()
{
    NODE *p;
    printf("front->");
    p = front;
    while (p != rear)
    {
        printf("|%d", p->data);
        p = p->link;
    }
    printf("|%d|<-rear\n\n", rear->data);
}

int main()
{
    PUSH(5);
    PUSH(1);
    PUSH(3);
    PUSH(2);
    PUSH(4);
    DISPLAY();
    printf("POP: %d\n\n", POP());
    DISPLAY();
    return 0;
}
