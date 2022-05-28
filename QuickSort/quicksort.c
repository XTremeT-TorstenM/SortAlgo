#include <stdio.h>

int swap(int arr[], int a, int b) {
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

void quicksort(int arr[], int start, int end) {
  if (start >= end) return;
  int pivot = start, i = start + 1, j = end;
  while (i <= j) {
    while (i <= end && arr[i] <= arr[pivot]) i++;
    while (j > start && arr[j] >= arr[pivot]) j--;
    if (i > j) swap(arr, pivot, j);
    else swap(arr, i, j);    
  }
  quicksort(arr, start, j - 1);
  quicksort(arr, j + 1, end);
}

int main () {
  int arr[] = {6, 7, 3, 5, 2, 4, 1};  
  for (int i = 0; i < 7; i++) {
    printf("%i", arr[i]);
  }
  quicksort(arr, 0, 6);
  printf("\n");

  for (int i = 0; i < 7; i++) {
    printf("%i", arr[i]);
  }
  
}
