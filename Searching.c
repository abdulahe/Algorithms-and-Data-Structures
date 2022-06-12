// U binarno stablo pretraživanja umetnuti redom čvorove sa vrednostima ključeva
// 3, 15, 43, 2, 35, 33, 5, 12, 8. Prikazati izgled stabla nakon svakog umetanja.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// } NODE;

// struct node *newNODE(int data)
// {
//     struct node *node = (NODE *)malloc(sizeof(NODE));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// void inorder(struct node *tree)
// {
//     if (tree)
//     {
//         inorder(tree->left);
//         printf("   %d   ", tree->data);
//         inorder(tree->right);
//     }
// }

// struct node *insert(struct node *tree, int elem)
// {
//     if (tree == NULL)
//         return newNODE(elem);
//     if (tree->data > elem)
//         tree->left = insert(tree->left, elem);
//     else if (tree->data <= elem)
//         tree->right = insert(tree->right, elem);
//     return tree;
// }

// int main()
// {
//     struct node *tree = NULL;
//     int arr[] = {3, 15, 43, 2, 35, 33, 5, 12, 8};
//     for (int i = 0; i < 9; i++)
//     {
//         tree = insert(tree, arr[i]);
//         inorder(tree);
//         printf("\n\n");
//     }
//     return 0;
// }

// Iz binarnog stablo pretraživanja iz prethodnog zadatka,
// nakon umetanja svih čvorova, redom se brišu čvorovi 8, 15, 5.
// Nacrtati izgled stabla nakon svakog brisanja.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// } NODE;

// struct node *newNODE(int data)
// {
//     struct node *node = (NODE *)malloc(sizeof(NODE));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// void inorder(struct node *tree)
// {
//     if (tree)
//     {
//         inorder(tree->left);
//         printf("   %d   ", tree->data);
//         inorder(tree->right);
//     }
// }

// struct node *insert(struct node *tree, int elem)
// {
//     if (tree == NULL)
//         return newNODE(elem);
//     if (tree->data > elem)
//         tree->left = insert(tree->left, elem);
//     else if (tree->data <= elem)
//         tree->right = insert(tree->right, elem);
//     return tree;
// }

// struct node *minValueNode(struct node *node)
// {
//     struct node *current = node;
//     while (current && current->left != NULL)
//         current = current->left;
//     return current;
// }

// struct node *delete (struct node *tree, int elem)
// {
//     if (tree == NULL)
//         return tree;
//     if (elem < tree->data)
//         tree->left = delete (tree->left, elem);
//     else if (elem > tree->data)
//         tree->right = delete (tree->right, elem);
//     else
//     {
//         if (tree->left == NULL)
//         {
//             struct node *temp = tree->right;
//             free(tree);
//             return temp;
//         }
//         else if (tree->right == NULL)
//         {
//             struct node *temp = tree->left;
//             free(tree);
//             return temp;
//         }
//         struct node *temp = minValueNode(tree->right);
//         tree->data = temp->data;
//         tree->right = delete (tree->right, temp->data);
//     }
//     return tree;
// }

// int main()
// {
//     struct node *tree = NULL;
//     int arr[] = {3, 15, 43, 2, 35, 33, 5, 12, 8};
//     for (int i = 0; i < 9; i++)
//     {
//         tree = insert(tree, arr[i]);
//         inorder(tree);
//         printf("\n\n");
//     }
//     tree = delete (tree, 8);
//     inorder(tree);
//     printf("\n\n");
//     tree = delete (tree, 15);
//     inorder(tree);
//     printf("\n\n");
//     tree = delete (tree, 5);
//     inorder(tree);
//     printf("\n\n");
//     return 0;
// }

// U binarno stablo pretraživanja se najpre redom umeću ključevi
// 15, 25, 18, 31, 16, 2, 12, 14, 8, 22, 23, 28, 27.
//  Zatim se redom brišu ključevi 2, 25, 15, 16, 18, 22, 23
//  Prikazati izgled stabla nakon svakog umetanja i brisanja

// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *newNode(int data)
// {
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));
//     temp->left = NULL;
//     temp->right = NULL;
//     temp->data = data;
//     return temp;
// }

// void inorder(struct node *root)
// {
//     if (root)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// struct node *insert(struct node *root, int data)
// {
//     if (root == NULL)
//         root = newNode(data);
//     else if (data < root->data)
//         root->left = insert(root->left, data);
//     else if (data >= root->data)
//         root->right = insert(root->right, data);
//     return root;
// }

// struct node *minValueNode(struct node *root, int data)
// {
//     struct node *current = root;
//     while (current && current->left != NULL)
//         current = current->left;
//     return current;
// }

// struct node *delete (struct node *root, int data)
// {
//     if (root == NULL)
//         return root;
//     if (data > root->data)
//         root->right = delete (root->right, data);
//     else if (data < root->data)
//         root->left = delete (root->left, data);
//     else
//     {
//         if (root->right == NULL)
//         {
//             struct node *temp = root->left;
//             free(root);
//             return temp;
//         }
//         if (root->left == NULL)
//         {
//             struct node *temp = root->right;
//             free(root);
//             return temp;
//         }
//         struct node *temp = minValueNode(root->right, data);
//         root->data = temp->data;
//         root->right = delete (root->right, temp->data);
//     }
//     return root;
// }

// int main()
// {
//     int arr[] = {15, 25, 18, 31, 16, 2, 12, 14, 8, 22, 23, 28, 27};
//     struct node *t1 = NULL;
//     for (int i = 0; i < 13; i++)
//     {
//         t1 = insert(t1, arr[i]);
//         inorder(t1);
//         printf("\n");
//     }
//     int arr2[] = {2, 25, 15, 16, 18, 22, 23};
//     for (int i = 0; i < 7; i++)
//     {
//         t1 = delete (t1, arr2[i]);
//         inorder(t1);
//         printf("\n");
//     }
//     return 0;
// }

// interpolation search

// #include <stdio.h>

// int interpolationSearch(int *arr, int elem, int n)
// {
//     int low = 0, high = n - 1, mid = 0;
//     while (low < high)
//     {
//         mid = low + ((elem - arr[low]) / (arr[high] - arr[low])) * (high - low);
//         if (arr[mid] == elem)
//             break;
//         else if (arr[mid] > elem)
//             high = mid - 1;
//         else if (arr[mid] < elem)
//             low = mid + 1;
//     }
//     if (arr[mid] == elem)
//         return mid;
//     else
//         return -1;
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 9, 11, 13};
//     int trazeni = 12;
//     printf("Indeks trazenog elementa je: %d", interpolationSearch(arr, trazeni, 7));
//     return 0;
// }