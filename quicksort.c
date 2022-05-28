#include "quicksort.h"
#include "swap.h"

void quicksort_rec(int arr[], int start, int end) {
  if (start >= end) return;
  int pivot = start, i = start + 1, j = end;
  while (i <= j) {
    while (i <= end && arr[i] <= arr[pivot]) i++;
    while (j > start && arr[j] >= arr[pivot]) j--;
    if (i > j) swap(arr, pivot, j);
    else swap(arr, i, j);    
  }
  quicksort_rec(arr, start, j - 1);
  quicksort_rec(arr, j + 1, end);
}

void quicksort(int arr[], int size) {
  quicksort_rec(arr, 0 , size - 1);
}
