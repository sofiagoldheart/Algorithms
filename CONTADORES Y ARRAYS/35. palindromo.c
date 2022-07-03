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
    int j=n;
    for(int i=0;i<11;i++){
        if(palabra[i]==palabra[j]){
            j--;
        }
        else if(palabra[i]=='\0'){
            printf("La palabra es un palindromo");
            i=11;
        }
        else{
            printf("La palabra no es un palindromo");
            break;
        }
    }
    return 0;
}
