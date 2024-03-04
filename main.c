#include <stdio.h>

void dizerBoatarde (char nome[20]){
  printf("Boa tarde %s\n", nome);
}


int main(void) {
  dizerBoatarde("Maria");
  dizerBoatarde("João");
  return 0;
}