#include <stdio.h>

int main(){
    int n=0;
    int r=0;
    
    scanf("%d",&n);
    
        if (n%3 == 0){
             printf("Es multiplo de 3.\n");
            r=n*10;
              printf("Resultado: \n%d",r);
        } else {
      printf("No es multiplo de 3.\n");
            r=n*3;
              printf("Resultado: \n%d",r);
    } 
}
