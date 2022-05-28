#include "selectionsort.h"
#include "swap.h"

void selectionsort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int smallest = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[smallest]) {
        smallest = j;
      }
    }
    if ( i != smallest) {
      swap(arr, i, smallest);
    }  
  }
}
