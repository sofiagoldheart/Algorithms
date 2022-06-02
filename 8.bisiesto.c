#include <stdio.h>

int main(){
    int year=0;
    
    scanf("%d",&year);

        if (year%400==0){
            printf("Bisiseto \n%d",year);
            }
            if(year%4==0 && year%100!=0){
            printf("Bisiseto \n%d",year);
            }
        else {
        printf("NO es bisiseto \n%d",year);
        }
}
