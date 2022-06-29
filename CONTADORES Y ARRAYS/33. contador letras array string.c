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
