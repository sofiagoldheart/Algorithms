#include <stdio.h>

int main(){
    char word[10];
    int n=0, cont=0;

    printf("Ingresa una palabra:\n");
    scanf("%s",word);

  for (int i=0; i<=n; i++){
    if (word[i]!='\0'){
      cont++;
      n++;
    }
    else
      n--;
  }
    printf("Tu palabra tiene %d letras \n",cont);
  return 0;
}

//O
#include <stdio.h>

int main(){
    char cadena[10];

    printf("Ingresa una palabra:\n");
    scanf("%s",cadena);

  for (int i=0; i<10; i++){
    if (cadena[i]=='\0'){
    printf("%s tiene un tamaño de %d letras \n",cadena,i);
  i=10;
    }
  }
}
