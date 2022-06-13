#include <stdio.h>
int main() {
    float suma=0;
    float promedio=0;
    float n=0;
    int c=0;
  
  do{
        for (int i=0; i<5; i++){
            printf("Ingresa una calificación:\n");
            scanf("%f",&n);
             if (n>=7){
                printf("Calificación aprobada\n");
                } else {
                printf("Calificación reprobada\n");
                }
            suma=suma+n;
            promedio=suma/5;
    }
     if (promedio>=7){
                printf("Aprobado, ");
                } else {
                printf("Reprobado, ");
                }
    printf("el promedio total de la calificación es de: %.2f\n", promedio);
    printf("Si desea realizar el calculo de un promedio nuevamente presione 1\n");
    scanf("%d",&c);
    }
    while (c==1);
    printf("Ha decidido salir");  
    return 0;
}
