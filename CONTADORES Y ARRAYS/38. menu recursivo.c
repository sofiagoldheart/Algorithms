#include <stdio.h>

int main(){
    int op=0;
    do{
        printf("Menu\nOpcion 1:Tamaño de una palabra\n");
        printf("Opcion 2:Comprobar si 2 palabras son iguales\n");
        printf("Opcion 3:Comprombar si la palabra es un palindromo\n");
        printf("Opcion 4:Salir\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
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
                printf("El tamaño de la palabra es de %d letras\n", tam);
                break;
            }
            case 2:{
                char p1[10], p2[10];
                printf("Inserte la primer palabra:");
                scanf("%s", p1);
                printf("Inserte la segunda palabra:");
                scanf("%s", p2);
            
                for(int i=0;i<10;i++){
                    if(p1[i]!=p2[i]){
                        printf("Las palabras no son iguales\n");
                        i=10;
                    }
                    else{
                        if(p1[i]=='\0'){
                            printf("Las palabras son iguales\n");
                            i=10;
                        }
                    }
                }
                break;
            }
            case 3:{
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
                int j=n;
                for(int i=0;i<11;i++){
                    if(palabra[i]==palabra[j]){
                        j--;
                    }
                    else if(palabra[i]=='\0'){
                        printf("La palabra es un palindromo\n");
                        i=11;
                    }
                    else{
                        printf("La palabra no es un palindromo\n");
                        break;
                    }
                }
                break;
            }
            case 4:{
                break;
            }
            default:{
                printf("Valor inválido\n");
            }
        }
    }
    while(op!=4);
    return 0;
}
