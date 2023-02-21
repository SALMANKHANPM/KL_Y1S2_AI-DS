#include <stdio.h>

void printArr(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

void insertionSort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }

  printf("\nAfter Sorting  : ");
  printArr(arr, n);
}

int main() {
  int n;
  printf("Enter the Size of Array : ");
  scanf("%d", &n);

  int arr[n], i;
  printf("Enter Array Elements    : ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("\nBefore Sorting : ");
  printArr(arr, n);

  insertionSort(arr, n);
  return 0;
}