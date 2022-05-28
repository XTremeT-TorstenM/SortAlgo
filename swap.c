#include "swap.h"

void swap(int arr[], int swindex1, int swindex2) {
  int swap = arr[swindex1];
  arr[swindex1] = arr[swindex2];
  arr[swindex2] = swap;
}
