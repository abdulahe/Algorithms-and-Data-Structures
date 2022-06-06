//stack arrays

// #include <stdio.h>
// #define SIZE 5

// int s[SIZE], top = -1;

// int isFull(){
//     if (top == SIZE - 1)
//         return 1;
//     return 0;
// }

// int isEmpty(){
//     if (top == -1) return 1;
//     return 0;
// }

// void push(int elem){
//     if(isFull()){
//         printf("Overflow");
//         return;
//     }
//     top++;
//     s[top] = elem;
// }

// int pop(){
//     if(isEmpty())
//         printf("stack je prazan");
//     else
//     {
//         int elem = s[top];
//         top--;
//         return elem;
//     }
// }

// void displayStack(){
//     if(isEmpty()){
//         printf("stack is empty");
//         return;
//     }
//     printf("top\n |\n V\n");
//     for (int i = top; i >= 0; i--)
//         printf("|%d|\n", s[i]);
// }

// int main(){
//     push(2);
//     push(1);
//     push(3);
//     push(6);
//     push(5);
//     displayStack();
//     printf("\n\npop: %d\n\n", pop());
//     displayStack();
//     return 0;
// }


//stack linked lists

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     struct node *link;
// }NODE;

// NODE *top;

// void push(int elem){
//     NODE *p = (struct node*)malloc(sizeof(NODE));
//     p->data = elem;
//     p->link = top;
//     top = p;
// }

// int pop(){
//     if(top == NULL)
//         printf("Stack je prazan");
//     else
//     {
//         NODE *p;
//         p = top;
//         top = top->link;
//         int elem = p->data;
//         p->link = NULL;
//         free(p);
//         return elem;
//     }
// }

// void displayStack(){
//     NODE *p;
//     p = top;
//     printf("top\n |\n V\n");
//     while (p!=NULL)
//     {
//         printf("|%d|\n",p->data);
//         p = p->link;
//     }
// }

// int main(){
//     push(5);
//     push(4);
//     push(3);
//     push(2);
//     push(1);
//     displayStack();
//     printf("\npop: %d\n\n", pop());
//     displayStack();
//     return 0;
// }