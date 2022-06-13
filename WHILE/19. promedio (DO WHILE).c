#include <stdio.h>
int main() {
float n=0, suma=0, promedio=0;
int x=0, i=0;

  do{ 
    printf("Ingresa una calificación:\n");
    scanf("%f",&n);
    if (n>0 || n<=10) {
    i++;
    suma=suma+n;
    promedio=suma/i;
      if (promedio>=7){
      printf("Aprobada con %f\n", promedio);
      } else {
      printf("Reprobada con %.2f\n", promedio);
      }
        } else {
      printf("Calificación inválida\n");
      printf("¿Desea continuar? (Presione 1 si desea continuar)\n");}
      scanf("%d",&x);
    } while (x==1);
      printf("Ha decidido salir");  
      return 0;
  }
