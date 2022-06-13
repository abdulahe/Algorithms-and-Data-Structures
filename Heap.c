// #include <stdio.h>
// #include <math.h>

// void heapify(int arr[], int n)
// {
//     int current = n / 2 - 1;
//     int temp;
//     while (current >= 0)
//     {
//         if (arr[current] < arr[current * 2 + 1] && current * 2 + 1 < n)
//         {
//             temp = arr[current];
//             arr[current] = arr[current * 2 + 1];
//             arr[current * 2 + 1] = temp;
//         }
//         if (arr[current] < arr[current * 2 + 2] && current * 2 + 2 < n)
//         {
//             temp = arr[current];
//             arr[current] = arr[current * 2 + 2];
//             arr[current * 2 + 2] = temp;
//         }
//         current--;
//     }
// }

// void display(int arr[], int n)
// {
//     for (int i = 0; pow(2, i) < n; i++)
//     {
//         for (int j = pow(2, i) - 1; j < pow(2, i + 1) - 1 && j < n; j++)
//         {
//             printf("%d ", arr[j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int tree[] = {22, 4, 3, 5, 1, 10, 2, 8, 6};
//     display(tree, 9);
//     for (int i = 9 / 2 - 1; i >= 0; i--)
//     {
//         heapify(tree, 9);
//         display(tree, 9);
//     }
//     return 0;
// }