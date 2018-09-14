#include <stdio.h>

unsigned int some_int = 2103405001;
char * address = &some_int;
unsigned int * int_address = &some_int;

int main(){
  printf("%x\n", some_int);

  int i;
  for (i = 0; i < 4; i++){
    // Are we printing out the value or the memory address of each byte?
    printf("Part %d of int: %hhx\n",i+1,*(address+i)); //safely generate the subsequent bytes
  }
  // Modifications
  printf("%d\n", some_int);

  for (i = 0; i < 4; i++){
    (*(address + i))++;
  }
  printf("Printing dec and hex after adding 1...\n");
  printf("Dec: %d\n", *address);
  printf("Hex: %x\n", *address);
  printf("Integer: %d\n", some_int);

  for (i = 0; i < 4; i++){
    (*(address + i))+= 16;
  }
  printf("Printing dec and hex after adding 16...\n");
  printf("Dec: %d\n", *address);
  printf("Hex: %x\n", *address);
  printf("Integer: %d\n", some_int);

  return 0;
}
