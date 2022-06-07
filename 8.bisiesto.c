#include <stdio.h>

int main(){
    int year=0;
    scanf("%d",&year);

     if (year%400==0){
        if(year%4==0 && year%100!=0){
            printf("Bisiseto\n");
                }else {
                printf("No es bisiseto\n");
                }   
            }
    }
