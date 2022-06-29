#include <stdio.h>

int main(){
    char cadena1[10];
    char cadena2[10];
    int x=0;
  do{
   for (int i=0; i<10; i++){
    printf("Ingresa dos palabras:\n");
    scanf("%s",cadena1);
    scanf("%s",cadena2);
      if (cadena1[i]==cadena2[i]){
      printf("Ambas palabras son iguales\n");
      printf("¿Desea continuar? (Presione 1 si desea continuar)\n");
      scanf("%d",&x);
    }else{
        printf("Ambas palabras no son iguales\n");
        printf("¿Desea continuar? (Presione 1 si desea continuar)\n");
        scanf("%d",&x);
    }
    }
    }
  while(x==1);
      printf("Ha decidido salir");  
      return 0;

}
