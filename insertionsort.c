#include "insertionsort.h"
#include "swap.h"

void insertionsort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int j = i + 1;
    while (j > 0 && arr[j] < arr[j - 1]) {
      swap(arr, j, j - 1);
      j -= 1;
    }
  }  
}
