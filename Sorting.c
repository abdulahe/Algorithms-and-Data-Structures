// metodi umetanja
// direct insertion
// #include <stdio.h>
// #include <stdlib.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {4, 5, 2, 3, 6, 7, 2};
//     int n = 7;
//     int key;
//     display(arr, n);
//     for (int i = 0; i < n - 1; i++)
//     {
//         int j;
//         key = arr[i + 1];
//         for (j = i; j >= 0 && arr[j] > key; j--)
//         {
//             arr[j + 1] = arr[j];
//         }
//         arr[j + 1] = key;
//         display(arr, n);
//     }
//     return 0;
// }

// shellsort

// #include <stdio.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// void shellsort(int arr[], int n)
// {
//     int i, j, k, temp;
//     for (i = n / 2; i > 0; i /= 2)
//     {
//         for (j = i; j < n; j++)
//         {
//             for (k = j - i; k >= 0; k = k - i)
//             {
//                 if (arr[k + i] >= arr[k])
//                     break;
//                 else
//                 {
//                     temp = arr[k];
//                     arr[k] = arr[k + i];
//                     arr[k + i] = temp;
//                 }
//                 display(arr, n);
//             }
//         }
//     }
// }

// int main()
// {
// int arr[] = {2, 55, 12, 0, 11, 8, 22};
// int n = 7;
// display(arr, n);
// shellsort(arr, n);
// // display(arr, n);
// return 0;
// }

// selection sort

// direct selection

// #include <stdio.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// void selectionSort(int arr[], int n)
// {
//     int minIndex, min;
//     for (int i = 0; i < n - 1; i++)
//     {
//         minIndex = i;
//         min = arr[i];
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 minIndex = j;
//             }
//         }
//         arr[minIndex] = arr[i];
//         arr[i] = min;
//         display(arr, n);
//     }
// }

// int main()
// {
//     int arr[] = {2, 55, 12, 0, 11, 8, 22};
//     int n = 7;
//     display(arr, n);
//     selectionSort(arr, n);
//     display(arr, n);
//     return 0;
// }

// heap sort

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int l = 2 * i + 1;
//     int r = 2 * i + 2;
//     if (l < n && arr[l] > arr[largest])
//         largest = l;
//     if (r < n && arr[r] > arr[largest])
//         largest = r;
//     if (largest != i)
//     {
//         swap(&arr[largest], &arr[i]);
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n)
// {
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
//     for (int i = n - 1; i >= 0; i--)
//     {
//         swap(&arr[i], &arr[0]);
//         heapify(arr, i, 0);
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {2, 55, 12, 0, 11, 8, 22};
//     heapSort(arr, 7);
//     printArray(arr, 7);
//     return 0;
// }

// bubble sort

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void bubbleSort(int arr[], int n)
// {
//     int swapped;
//     for (int i = n - 1; i > 0; i--)
//     {
//         swapped = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 swap(&arr[j], &arr[j + 1]);
//                 swapped = 1;
//             }
//         }
//         if (!swapped)
//             break;
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {2, 55, 12, 0, 11, 8, 22};
//     printArray(arr, 7);
//     bubbleSort(arr, 7);
//     printArray(arr, 7);
//     return 0;
// }

// shaker sort

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void shaker(int arr[], int n)
// {
//     for (int size = 0; size < n - 1; size++)
//     {
//         int swapped = 0;
//         for (int i = size; i < n - size - 1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 swap(&arr[i], &arr[i + 1]);
//                 swapped = 1;
//             }
//         }
//         for (int i = n - size; i > size; i--)
//         {
//             if (arr[i] < arr[i - 1])
//             {
//                 swap(&arr[i], &arr[i - 1]);
//                 swapped = 1;
//             }
//         }
//         if (!swapped)
//             break;
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main()
// {
//     int arr[] = {2, 55, 12, 0, 11, 8, 22};
//     printArray(arr, 7);
//     shaker(arr, 7);
//     printArray(arr, 7);
//     return 0;
// }

// quicksort

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int high, int low)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[++i], &arr[high]);
    return i;
}

void quickSort(int arr[], int high, int low)
{
    if (low < high)
    {
        int pI = partition(arr, high, low);
        quickSort(arr, high, pI + 1);
        quickSort(arr, pI - 1, low);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {2, 55, 12, 0, 11, 8, 22};
    printArray(arr, 7);
    quickSort(arr, 7, 0);
    printArray(arr, 7);
    return 0;
}