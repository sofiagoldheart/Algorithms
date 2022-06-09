#include <stdio.h>

int main() {
int n = 0;
  printf("Ingresa una calificación:\n");
  scanf("%d",&n);
while (n < 0 || n>10) {
  printf("Calificación no válida\n");
    printf("Ingresa otra calificación:\n");
    scanf("%d",&n);
  }
  printf("Calificación válida\n");
}
