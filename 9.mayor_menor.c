#include <stdio.h>

int main(){
    float n=0;
    
    scanf("%f",&n);
    
    if (n>10){
        printf("El numero %.2f es mayor \n",n);
    }
    else{
        printf("El numero %.2f es menor a 10",n);
    }
}
