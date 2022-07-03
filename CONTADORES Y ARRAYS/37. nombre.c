#include <stdio.h>

int main(){
    char nombre[8];
    printf("Inserte un nombre:");
    scanf("%s", nombre);
    printf("El nombre es:");
    for(int i=0;i<=7;i++){
        printf("%c", nombre[i]);
    }
    return 0;
}
