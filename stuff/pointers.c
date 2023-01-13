/*
Things to cover
pointers - what do they do
playing around with pointers
assigning a pointer variable
ft_swap
bus error
p = p
*/

#include <unistd.h>
#include <stdio.h>

void pointers_with_array(int *pointer, int array[]){
  printf("Addres of pointer: %p\n", pointer);
  printf("Value of pointer: %d\n", *pointer);
  printf("Address of the variable: %p\n", &array[0]);
  printf("Value of the variable: %d\n", array[0]);
}

void pointers_display(int *pointer){
  printf("Addres of pointer: %p\n", pointer);
  printf("Value of pointer: %d\n", *pointer);
}

int array_print(int array[], int size) {
  int loop = size;

  for(loop = 0; loop < size; loop++){
    printf("%d ", array[loop]);
  }
  return 0;
}

void ft_swap(int *a, int *b){
  // stwap the values of two pointers


  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int *return_pointer(){
  int *pika;
  int bulba = 456;

  pika = &bulba;

  return pika;

}



int main(){
  int *pointer;
  // int *raichu;

  // int num = 5;
  int array[] = {5, 4, 3, 2 ,1};
  char *pika = "Pikachu";
  char bulbasaur[10] = "bulbasaur";



  // pointer = &num;
  pointer = &array[0];
  // pointer = &array[0];

  // pointers_with_array(pointer, array);

  // pointers_display(pointer);
  // *pointer = *pointer + 50;
  pointer = pointer + 4;
  // int k = 777;
  // pointer = &k;
  pointers_display(pointer);


  // int x = 66;
  // int y = 78;

  // int *a = &x;
  // int *b = &y;
  // ft_swap(a, b);

  // pointers_display(pointer);
  // pointers_display(b);
  // write(1, pointer, 1);

  // write(1, &c, 1);

  // raichu = return_pointer;

  return 0;
}
