// #include <stdlib.h>
// #include <stdio.h>

// struct node
// {
//     int data;
//     struct node *right,*left;
// };

// struct node *newNode(int data){
//     struct node *node = (struct node*)malloc(sizeof(struct node));
//     node->data = data;
//     node->right = NULL;
//     node->left = NULL;
//     return node;
// }

// void print_inorder(struct node *tree){
//     if (tree)
//     {
//         print_inorder(tree->left);
//         printf("%d\n", tree->data);
//         print_inorder(tree->right);
//     }
// }

// void print_preorder(struct node *tree){
//     if(tree){
//         printf("%d\n",tree->data);
//         print_preorder(tree->left);
//         print_preorder(tree->right);
//     }
// }

// void print_postorder(struct node *tree){
//     if(tree){
//         print_postorder(tree->left);
//         print_postorder(tree->right);
//         printf("%d\n",tree->data);
//     }
// }

// void delTree(struct node *tree){
//     if(tree){
//         delTree(tree->left);
//         delTree(tree->right);
//         free(tree);
//     }
// }

// int main(){
//     struct node *root = newNode(1);
//     root->left	 = newNode(2);
//     root->right	 = newNode(3);
//     root->left->left = newNode(4);
//     printf("preorder\n");
//     print_preorder(root);
//     printf("inorder\n");
//     print_inorder(root);
//     printf("postorder\n");
//     print_postorder(root);
//     printf("deletion");
//     delTree(root->left);
//     getchar();
//     return 0;
// }


//zadatak 1
// void print_leaves(struct node *tree){
//     if(tree){
//         print_leaves(tree->left);
//         print_leaves(tree->right);
//         if(tree->right == NULL && tree->left == NULL)
//             printf("%d\n",tree->data);
//     }
// }


//zadatak 2
// int sumOfElem(struct node *tree, int sum){
//     if(tree == NULL)
//         return 0;
//     else{
//         sum = tree->data + sumOfElem(tree->left,sum) + sumOfElem(tree->right,sum);
//         return sum;
//     }
// }

//zadatak 3
// int NumOfElem(struct node *tree, int count){
//     if(tree == NULL)
//         return 0;
//     else{
//         count = NumOfElem(tree->left,count) + NumOfElem(tree->right,count) + 1;
//         return count;
//     }
// }

//zadatak 4
// #include <string.h>
// int includeE(struct node *tree){
//     if (strcmp(tree->data,"E") == 0 || includeE(tree->left) == 1 || includeE(tree->right) == 1)
//         return 1;
//     return 0;
// }

//zadatak 6
// int noOfNodesInRow(struct node *tree, int currentRow, int wantedRow, int count){
//     if (tree==NULL)
//         return 0;
//     else if (currentRow == wantedRow)
//         count++;
//     else
//         count = noOfNodesInRow(tree->left,currentRow+1,wantedRow,count) + noOfNodesInRow(tree->right,currentRow+1,wantedRow,count);
//     return count;
// }


//zadatak 7
// void printNodesInRow(struct node *tree, int currentRow, int wantedRow){
//     if (tree==NULL)
//         return;
//     else if (currentRow == wantedRow)
//         printf("%d\n",tree->data);
//     else{
//         printNodesInRow(tree->left,currentRow+1,wantedRow);
//         printNodesInRow(tree->right,currentRow+1,wantedRow);
//     }
// }

//zadatak 8
// int sumOfNodesInRow(struct node *tree, int currentRow, int wantedRow, int sum){
//     if (tree==NULL)
//         return 0;
//     else if (currentRow == wantedRow)
//         sum += tree->data;
//     else
//         sum = sumOfNodesInRow(tree->left,currentRow+1,wantedRow,sum) + sumOfNodesInRow(tree->right,currentRow+1,wantedRow,sum);
//     return sum;
// }

//zadatak 9
// int sumOfLeaves(struct node *tree, int sum){
//     if (tree == NULL)
//         return 0;
//     else if(tree->left == NULL && tree->right == NULL)
//         sum += tree->data;
//     else
//         sum = sumOfLeaves(tree->left,sum) + sumOfLeaves(tree->right,sum);
//     return sum;
// }

//zadatak 10
// int maxElem(struct node *tree,int max){
//     if(tree == NULL)
//         return max;
//     else{
//         if(tree->data > max)
//             max = tree->data;
//         max = maxElem(tree->left,max);
//         max = maxElem(tree->right,max);
//     }
//     return max;
// }
