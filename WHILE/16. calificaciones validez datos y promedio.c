#include <stdio.h>
int main() {
float suma=0;
float promedio=0;
float n=0;

for (int i=0; i<5; i++){
    printf("Ingresa una calificación:\n");
    scanf("%f",&n);
  while (n<0 || n>10) {
    printf("Calificación no válida\n");
    printf("Ingresa otra calificación:\n");
    scanf("%f",&n);
    }
    printf("Calificación válida\n");
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
}
