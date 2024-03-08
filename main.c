#include <stdio.h>

/*

 * Dominick Amaral
 * COP 3502C
 * Lab Assignment 7
 * 3/7/24

 */

void bubbleSort(int arr[], int n, int SWAPS1[]){
    int i, j, temp, swaps1;
    swaps1 = 0;

    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swaps1++;
                SWAPS1[j]++;
            }
        }
    }

    for (i = 0; i < n; i++){
        printf("%d: %d\n", arr[i], SWAPS1[i]);
    }

    printf("total # of swaps: %d\n\n", swaps1);
}

void selectionSort(int arr[], int n, int SWAPS2[]){
    int i, j, minIndex, temp, swaps2;
    swaps2 = 0;

    for (i = 0; i < n-1; i++){
        minIndex = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        if (minIndex != i){
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;

            swaps2++;
            SWAPS2[i]++;
        }
    }

    for (i = 0; i < n; i++){
        printf("%d: %d\n", arr[i], SWAPS2[i]);
    }

    printf("total # of swaps: %d\n\n", swaps2);
}

int main(){

    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int Swaps1[n1];

    for (int i = 0; i < n1; i++){
        Swaps1[i] = 0;
    }

    printf("array1 bubble sort:\n");
    bubbleSort(array1, n1, Swaps1);

    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int Swaps2[n2];

    for (int i = 0; i < n2; i++){
        Swaps2[i] = 0;
    }

    printf("array2 bubble sort:\n");
    bubbleSort(array2, n2, Swaps2);

    int array3[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    int Swaps3[n3];

    for (int i = 0; i < n3; i++){
        Swaps3[i] = 0;
    }

    printf("array1 selection sort:\n");
    selectionSort(array3, n3, Swaps3);

    int array4[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    int Swaps4[n4];

    for (int i = 0; i < n4; i++){
        Swaps4[i] = 0;
    }
    printf("array2 selection sort:\n");
    selectionSort(array4, n4, Swaps4);

    return 0;
}
