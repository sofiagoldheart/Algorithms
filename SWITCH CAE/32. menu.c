#include <stdio.h>

int main(){
  int op;
  do {
  printf("Ingresa un número:\n");
  scanf("%d",&op);
  switch (op){
          case 1: printf("1)Suma");
      break;
          case 2: printf("2)Resta");
      break;
          case 3: printf("3)Multiplicar");
      break;
          case 4: printf("4)Salir");
      break;
              }
    } while (op=!4);
  }
  
