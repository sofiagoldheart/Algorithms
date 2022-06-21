#include <stdio.h>

int main(){
    int num=0;
    printf("Inserte el numero:\n");
    scanf("%d", &num);
    if(num==1 || num==2 || num==3 || num==5 || num==7){
        printf("Es un numero primo");
    }
    else{
        if(num%2==0 || num%3==0 || num%5==0 || num%7==0){
        printf("No es un numero primo");
    }
    else{
        printf("Es un numero primo");
    }
    }
    return 0;
}
