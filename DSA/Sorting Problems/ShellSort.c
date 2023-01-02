#include <stdio.h>

// Shell Sort
void shellSort(int arr[], int n){
    int i, j, gap, key;
    for(gap = n/2; gap > 0; gap = gap / 2){
        for (i = gap; i < n; i += 1){
            key = arr[i];
            for (j = i; j >= gap && arr[j - gap] > key; j -= gap){
                arr[j] = arr[j - gap];
            }
        arr[j] = key;
        }
    }
}


// Printing Array
void ptrOutput(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

// Driver Code
int main() {
    int n;
    printf("Enter the No. of Elements : ");
    scanf("%d", &n);
    
    int arr[n], i;
    printf("Enter the %d Array Elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nElements Before Sort : ");
    ptrOutput(arr, n);

    shellSort(arr, n);
    
    printf("\nElements After Sort : ");
    ptrOutput(arr, n);
    
    return 0;
}