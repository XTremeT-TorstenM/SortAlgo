#include <stdbool.h>
#include "bubblesort.h"
#include "swap.h"

void bubblesort(int arr[], int size) {
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (int i = 1; i < size; i++) {
      if (arr[i - 1] > arr[i]) {
        swap(arr, i - 1, i);
        sorted = false;
      } 
    }
  }
}
