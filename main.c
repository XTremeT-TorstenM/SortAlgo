#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "quicksort.h"

void printarray(int arr[], int size) {
  for (int i = 0;i < size; i++) {
    printf("[%i]:%i ", i, arr[i]);
  }  
  printf("\n");
}

int main() {
  int arr[] = {6, 4, 3, 7, 2, 9, 1, 5};
  printf("BubbleSort\n");
  printarray(arr, sizeof(arr) / sizeof(arr[0]));
  bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
  printarray(arr, sizeof(arr) / sizeof(arr[0]));
  
  printf("InsertionSort\n");
  int arr2[] = {6, 4, 3, 7, 2, 9, 1, 5};
  printarray(arr2, sizeof(arr2) / sizeof(arr2[0]));
  insertionsort(arr2, sizeof(arr2) / sizeof(arr2[0]));
  printarray(arr2, sizeof(arr2) / sizeof(arr2[0]));

  printf("SelectionSort\n");
  int arr3[] = {6, 4, 3, 7, 2, 9, 1, 5};
  printarray(arr3, sizeof(arr3) / sizeof(arr3[0]));
  selectionsort(arr3, sizeof(arr3) / sizeof(arr3[0]));
  printarray(arr3, sizeof(arr3) / sizeof(arr3[0]));

  printf("QuickSort\n");
  int arr4[] = {6, 4, 3, 7, 2, 9, 1, 5};
  printarray(arr4, sizeof(arr4) / sizeof(arr4[0]));
  quicksort(arr4, sizeof(arr4) / sizeof(arr4[0]));
  printarray(arr4, sizeof(arr4) / sizeof(arr4[0]));
  return 0;
}
