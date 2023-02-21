#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int quickSort(int arr[], int first, int last){
    int i, j, p; //Where p = Pivot Element

    if (first < last){
        p = first;
        i = first;
        j = last;

        while (i < j){
            while (arr[i] <= arr[p] && i < last){
                i++;
            }
            while (arr[j] > arr[p]){
                j--;
            }
            if (i < j){
                swap(&arr[i], &arr[j]);
            }
        }

        swap(&arr[p], &arr[j]);

        quickSort(arr, first, j-1);
        quickSort(arr, j+1, last);
    }

    return 0;
}

void printOut(int arr[], int n){
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

    int arr[n], first, last;
    printf("Enter the Elements of the Array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    first = 0;
    last = n-1;

    printf("Before Sorting : ");
    printOut(arr, n);

    quickSort(arr, first, last);
    
    printf("After Sorting : ");
    printOut(arr, n);

    return 0;
}