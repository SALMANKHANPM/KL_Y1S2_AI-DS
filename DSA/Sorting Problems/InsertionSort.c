#include <stdio.h>

// Insertion Sort
void insertionSort (int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    
    insertionSort(arr, n);
    
    printf("\nElements After Sort : ");
    ptrOutput(arr, n);
    
    return 0;
}