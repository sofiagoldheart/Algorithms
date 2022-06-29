//solo puede guardar 5 caracteres y el array tomar 4.
#include <stdio.h>

int main(){
    char name[5];

    printf("Ingresa un nombre:\n");
    scanf("%s",name);
    printf("Tu nombre es: %s\n",name);
  
    for(int i=0; i<=3; i++){
      printf("%c",name[i]);
    }
}


//cadenacadenacadena
#include <stdio.h>

int main(){
    char name[5];

    printf("Ingresa un nombre:\n");
    scanf("%s",name);
    printf("Tu nombre es: %s\n",name);
  
    for(int i=0; i<=3; i++){
      printf("%c",name[0]);
      printf("%c",name[1]);
      printf("%c",name[2]);
      printf("%c",name[3]);

    }
}
