#include <stdio.h>
int main() {
float n=0, suma=0, promedio=0;
int x=0;

  do{ 
    printf("Ingresa una calificación:\n");
    scanf("%f",&n);
    n++;
    if (n<0 || n>10) {
    printf("Calificación no válida\n");
    printf("Ingresa otra calificación:\n");
    scanf("%f",&n);
    } else {
    printf("Calificación válida\n");
    }
      if (n>=7){
      printf("Calificación aprobada\n");
      } else {
      printf("Calificación reprobada\n");
      }
    suma=suma+n;
    promedio=suma/5;
    if (promedio>=7){
      printf("Aprobado, ");
      } else {
      printf("Reprobado, ");
      }
      printf("el promedio total de la calificación es de: %.2f\n", promedio);
      printf("Si desea realizar el calculo de un promedio nuevamente presione 1\n");
      scanf("%d",&x);
    } while (x==1);
      printf("Ha decidido salir");  
      return 0;
  }
