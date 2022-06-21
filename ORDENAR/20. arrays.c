#include <stdio.h>

int main(){
    int s=0;
    int cont=1;

    printf("Inserte el tamaño del arreglo:");
    scanf("%d", &s);

    int x[s];
    for(int i=0; i<s; i++){
        printf("Inserte el %dº valor entero: \n", cont);
        scanf("%d", &x[i]);
        cont=cont+1;
    }
    for(int j=0; j<s; j++){
        printf("El valor de la %dº posicion es %d \n", j+1, x[j]);
    }
    return 0;
}
