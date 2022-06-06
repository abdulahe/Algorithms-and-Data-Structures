//queues with array

// #include <stdio.h>
// #include <conio.h>
// #define SIZE 5

// int q[SIZE], f = -1, r = -1;

// int isFull(){
//     if(f == (r+1)%SIZE) return 1;
//     return 0;
// }

// int isEmpty(){
//     if(f == -1) return 1;
//     return 0;
// }

// void qInsert(int elem){
//     if(isFull()){
//         printf("Overflow");
//     }
//     else{
//         if(f == -1) f=0;
//         r = (r+1)%SIZE;
//         q[r] = elem;
//     }
// }

// int qPop(){
//     if(isEmpty()) printf("Underflow!!");
//     else{
//         int elem = q[f];
//         if(f == r) f=r=-1;
//         else f = (f+1)%SIZE;
//         return elem;
//     }
// }

// void display(){
//     if(isEmpty()) printf("\nqueue is empty\n");
//     else{
//         printf("\n\nfornt|%d|->",f);
//         for(int i=f;i!=r;i=(i+1)%SIZE){
//             printf(" %d ",q[i]);
//         }
//         printf(" %d <-rear|%d|\n", q[r], r);
//     }
// }

// int main(){
    // int opr,elem;
    // do
    // {
    //     system("cls");
    //     printf("***** Circular queues operation *****");
    //     printf("\nPress 1-insert, 2-delete, 3-display, 4-exit");
    //     printf("\nYour option: ");
    //     scanf("%d", &opr);
    //     switch (opr)
    //     {
    //     case 1:
    //         printf("\n\nElement you wish to insert into the queue: ");
    //         scanf("%d", &elem);
    //         qInsert(elem);
    //         break;
    //     case 2:
    //         elem = qPop();
    //         printf("\n\nElment you deleted: %d", elem);
    //         break;
    //     case 3:
    //         display();
    //         break;
    //     case 4:
    //         break;
    //     default:
    //         printf("\n\nYou chose an invalid option!!");
    //         break;
    //     }
    //     printf("\n\nPress any key to continue....");
    //     getch();
    // } while (opr != 4);
//     return 0;
// }





//queues with linked list

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// typedef struct node
// {
//     int data;
//     struct node *link;
// }NODE;

// NODE *front = NULL, *rear = NULL;

// void insert(int elem){
//     NODE *temp;
//     temp = (NODE*)malloc(sizeof(NODE));
//     if(temp == NULL) printf("Overflow!!");
//     else {
//         temp->data = elem;
//         temp->link = NULL;
//         if (front == NULL)
//             front = rear = temp;
//         else
//         {
//             rear->link = temp;
//             rear = temp;
//         }
//     }
// }

// int delete(){
//     if(front == NULL) printf("Underflow!!");
//     else{
//         int elem;
//         NODE *p;
//         p = front;
//         if(front == rear) rear == NULL;
//         front = front->link;
//         p->link = NULL;
//         elem = p->data;
//         free(p);
//         return elem;
//     }
// }

// void display(){
//     if(front == NULL)printf("\nQueue is empty!\n");
//     else{
//         NODE *p;
//         p = front;
//         printf("front->");
//         while (p!=rear)
//         {
//             printf(" %d ", p->data);
//             p = p->link;
//         }
//         printf(" %d <-rear", rear->data);
//     }
// }

// int main(){
//     int opr,elem;
//     do
//     {
//         system("cls");
//         printf("***** Circular queues operation *****");
//         printf("\nPress 1-insert, 2-delete, 3-display, 4-exit");
//         printf("\nYour option: ");
//         scanf("%d", &opr);
//         switch (opr)
//         {
//         case 1:
//             printf("\n\nElement you wish to insert into the queue: ");
//             scanf("%d", &elem);
//             insert(elem);
//             break;
//         case 2:
//             elem = delete();
//             printf("\n\nElment you deleted: %d", elem);
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             break;
//         default:
//             printf("\n\nYou chose an invalid option!!");
//             break;
//         }
//         printf("\n\nPress any key to continue....");
//         getch();
//     } while (opr != 4);
//     return 0;
// }



//deque

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #define SIZE 100

// int queue[SIZE], f = -1, r = -1;

// void insert_r(int x){
//     if(f == (r+1)%SIZE)
//         printf("\nOverflow!!\n");
//     else if(f == -1){
//         f = r = 0;
//         queue[r] = x;
//     }
//     else{
//         r = (r+1)%SIZE;
//         queue[r] = x;
//     }
// }

// void insert_f(int x){
//     if(f == (r+1)%SIZE)
//         printf("\nOverflow!!\n");
//     else if(f == -1){
//         f = r = 0;
//         queue[r] = x;
//     }
//     else{
//         f = (f+SIZE-1)%SIZE;
//         queue[f] = x;
//     }
// }

// int delete_r(){
//     int elem;
//     if(f == -1)
//         printf("\nUnderflow!!\n");
//     else if(r == f){
//         elem = queue[r];
//         r = -1;
//         f = -1;
//     }
//     else{
//         elem = queue[r];
//         r = (r+SIZE-1)%SIZE;
//     }
//     return elem;
// }

// int delete_f(){
//     int elem;
//     if(f == -1)
//         printf("\nUnderflow!!\n");
//     else if(r == f){
//         elem = queue[r];
//         r = -1;
//         f = -1;
//     }
//     else{
//         elem = queue[f];
//         f = (r+1)%SIZE;
//     }
//     return elem;
// }

// void display(){
//     if(f == -1)
//         printf("\nQueue is empty!!\n");
//     else{
//         printf("front|%d|->", f);
//         for(int i=0;i!=r;i=(i+1)%SIZE)
//             printf(" %d ",queue[i]);
//         printf(" %d <-rear|%d|",queue[r], r);
//     }
// }

