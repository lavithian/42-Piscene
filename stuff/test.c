#include <stdio.h>
#include <stdlib.h>

void function(){
  int i = 10;
  printf("Function i: %i\n", i);
  printf("Function i: %p\n", &i);
}

int main(){

  int i = 5;
  int *p;

  printf("%p\n",sizeof(p));
  p = &i;
  p = (int* )malloc(sizeof(int) *);
  printf("%p\n",sizeof(p));
  function();
  printf("Main i: %i\n", i);
  printf("Main i: %p\n", &i);

}
