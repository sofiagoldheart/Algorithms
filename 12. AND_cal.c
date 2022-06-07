#include <stdio.h>

int main(){
    int grade=0;
    printf("Insert grade\n");
    scanf("%d",&grade);
    
    if (grade>=0 && grade<=10){
            if (grade>6){
            printf("A");
                } 
                else {
                printf("F");
                }
        } else {
        printf("Invalid");
        }
    }  
    
