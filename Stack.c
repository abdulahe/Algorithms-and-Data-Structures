// stack arrays

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

// stack linked lists

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

//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 5
//
// int s[SIZE],top=-1;
//
// int Sfull(){
//	if(top == SIZE) return 1;
//	return 0;
//}
//
// int Sempty(){
//	if(top == -1) return 1;
//	return 0;
//}
//
// void push(int elem){
//	if(Sfull()) printf("OVERFLOW!!!");
//	else{
//		top++;
//		s[top] = elem;
//	}
//}
//
// int pop(){
//	if(Sempty()){
//		printf("UNDERFLOW!!!");
//		return -1;
//	}
//	else{
//		int p = s[top];
//		top--;
//		return p;
//	}
//}
//
// void display(){
//	if(Sempty()) printf("Stack is empty!");
//	else{
//		int i;
//		for(i=0;i<=top;i++) printf("%d\n",s[i]);
//	}
//}
//
// int main(){
//	int opn,elem;
//	do{
//    	clrscr();
//        printf("\n ### Stack Operations ### \n\n");
//        printf("\n Press 1-Push, 2-Pop,3-Display,4-Exit\n");
//        printf("\n Your option ? ");
//        scanf("%d",&opn);
//        switch(opn)
//        {
//        case 1:
//			printf("\n\nRead the element to be pushed ?");
//            scanf("%d",&elem);
//            push(elem);
//			break;
//		case 2:
//			elem=pop();
//            if( elem != -1)
//                printf("\n\nPopped Element is %d \n",elem);
//            break;
//        case 3:
//			printf("\n\nStatus of Stack\n\n");
//            display();
//			break;
//        case 4:
//			printf("\n\n Terminating \n\n");
//			break;
//        default:
//			printf("\n\nInvalid Option !!! Try Again !! \n\n");
//            break;
//        }
//        printf("\n\n\n\n  Press a Key to Continue . . . ");
//        getch();
//    }while(opn != 4);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
// typedef struct node{
//	int data;
//	struct node *link;
//}NODE;
//
// void push(int);
// int pop();
// void diplay();
// NODE *top = NULL;
//
// void push (int info){
//	NODE *temp;
//	temp = (NODE*)malloc(sizeof(NODE));
//	if(temp == NULL)
//		printf("Out of Memory!! Overflow!!");
//	else{
//		temp->data = info;
//		temp->link = top;
//		top = temp;
//		printf("Node has been inserted at Top(fornt) successfully");
//	}
//}
//
// int pop(){
//	int info;
//	NODE *t;
//	if(top == NULL)
//		printf("Stack is empty!!");
//		return -1;
//	else{
//		info = top->data;
//		t = top;
//		top = top->link;
//		t->link = NULL;
//		free(t);
//		return info;
//	}
//}
//
// void diplay(){
//	if(top == NULL)
//		printf("Stack is empty!!");
//	else{
//		NODE *p;
//		p = top;
//		printf("Top --> ");
//		while(p->link != NULL){
//			printf("|%d| --> ",p->data);
//			p = p->link;
//		}
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
// int s[SIZE],top[3]={0,-1,SIZE};
//
// int Sfull(){
//	if(top[1] == top[2]-1) return 1;
//	return 0;
//}
//
// int Sempty(stno){
//	switch(stno){
//		case 1:
//			if(top[1] == -1) return 1;
//			else return 0;
//		case 2:
//			if(top[2] == SIZE) return 1;
//			else return 0;
//	}
//}
//
// void push(int elem, int stno){
//	if(Sfull()) printf("OVERFLOW!!");
//	else{
//		if(stno == 1)
//			top[stno]++;
//		else
//			top[stno]--;
//		s[top[stno]] = elem;
//	}
//}
//
// int pop(int stno){
//	if(Sempty(stno)) printf("UNDERFLOW!!");
//	else{
//		int elem;
//		elem = s[top[stno]];
//		if(stno == 1) top[stno]--;
//		else top[stno]++;
//		return elem;
//	}
//	return -1;
//}
//
//
// void display(int stno){
//	int i;
//	if(Sempty(stno)) printf("Stack is empty!!");
//	else{
//		if(stno == 1)
//			for(i=0;i<=top[stno];i++)
//				printf("%d\n",s[i]);
//		else
//			for(i=SIZE;i>=top[stno];i--)
//				printf("%d\n",s[i]);
//		printf("top^");
//	}
//}

// Napisati metodu PUSH kod steka implementiranog preko lancane liste.

// void push(int elem){
//	struct node *p;
//	p = (struct node*)malloc(sizeof(struct node));
//	p->data = elem;
//	p->next = NULL;
//	top->next = p;
//	top = top->next;
// }

// Napisati metodu POP kod steka implementiranog preko niza.

// void pop(){
//	int elem;
//	s[top] = elem;
//	top--;
//	return elem;
// }

#include <stdio.h>
#define SIZE 5

int s[SIZE], top = -1;

int isFull()
{
    int len = sizeof(s) - 1;
    if (top == len)
        return 1;
    return 0;
}

void push(int elem)
{
    if (isFull(s, top))
        printf("OVERFLOW!!");
    else
    {
        top++;
        s[top] = elem;
    }
}

void displayStack()
{
    for (int i = 0; i <= top; i++)
        printf("%d\n", s[i]);
    printf("^Top");
}

int pop()
{
    int elem = s[top];
    top--;
    return elem;
}

int main()
{
    push(5);
    push(6);
    push(8);
    push(7);
    push(3);
    displayStack();
    printf("\n\n\nPop: %d", pop());
    printf("\n\n");
    displayStack();
    return 0;
}