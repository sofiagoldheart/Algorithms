#include <stdio.h>

int main(){
    char p1[10], p2[10];
    printf("Inserte la primer palabra:");
    scanf("%s", p1);
    printf("Inserte la segunda palabra:");
    scanf("%s", p2);

    for(int i=0;i<10;i++){
        if(p1[i]!=p2[i]){
            printf("Las palabras no son iguales");
            i=10;
        }
        else{
            if(p1[i]=='\0'){
                printf("Las palabras son iguales");
                i=10;
            }
        }
    }
}
