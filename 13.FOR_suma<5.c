/* ciclo FOR: for (inicio; límite; incremento) {}
ex: for (int i=0; i<=10; i++) {}*/
#include <stdio.h>
int main() {
    int suma=0;
    int n=0;
        for (int i=0; i<5; i++){
            printf("Ingresa un número a sumar:\n");
            scanf("%d",&n);
                suma=suma+n;
    }
    printf("%d\n", suma);
}
