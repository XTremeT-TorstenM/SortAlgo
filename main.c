#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bubblesort.h"

void printarray(int arr[], int size) {
  for (int i = 0;i < size; i++) {
    printf("[%i]:%i ", i, arr[i]);
  }  
  printf("\n");
}

int main() {
  int arr[] = {6, 4, 3, 7, 2, 9, 1, 5};

  printarray(arr, sizeof(arr) / sizeof(arr[0]));
  bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
  
  printarray(arr, sizeof(arr) / sizeof(arr[0]));
}
