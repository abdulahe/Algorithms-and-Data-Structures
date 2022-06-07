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