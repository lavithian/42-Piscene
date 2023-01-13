#include <stdio.h>

int array_print(int array[], int size) {
  int loop = size;

  for(loop = 0; loop < size; loop++){
    printf("%d ", array[loop]);
  }
  return 0;
}