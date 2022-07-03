#include <stdio.h>

int main(){
    char palabra[11];
    int n=0, tam=0;
    printf("Inserte una palabra:");
    scanf("%s", palabra);
    for(int i=0;i==n;i++){
        if(palabra[i]!='\0'){
            tam++;
            n++;
        }
        else{
            n--;
        }
    }
    printf("La palabra es de %d letras", tam);
    return 0;
}
