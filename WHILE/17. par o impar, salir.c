//DO WHILE
#include <stdio.h>
int main() {
int n=0;
int c=0;

  do{
    printf("Ingresa un valor:\n");
    scanf("%d",&n);
    if (n%2==0){
      printf("Es un número par\n");
    } else {
      printf("Es un número impar\n");
    }
    printf("Si desea continuar presione 1\n");
    scanf("%d",&c);
    }
    while (c==1);
    printf("Ha decidido salir");  
    return 0;
}
