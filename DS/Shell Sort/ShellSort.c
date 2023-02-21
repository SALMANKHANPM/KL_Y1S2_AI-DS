#include <stdio.h>

void shellSort(int arr[], int n){
    int i, j, temp, gap;

    for (gap = n/2; gap > 0 ; gap /= 2){
        for (i = gap; i < n; i++){
            temp = arr[i];
            for (j = i;  j >= gap && arr[j - gap] > temp; j -= gap){
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void printOUT(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {
    int n;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements of the Array : ");
    for (int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting : ");
    printOUT(arr, n);

    shellSort(arr, n);

    printf("After Sorting : ");
    printOUT(arr, n);

    return 0;
}
