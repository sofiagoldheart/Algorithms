#include <stdio.h>

int main(){
    float suma=0, promedio=0, cal=0, app=0, rpp=0;
    int tam=0, ap=0, rp=0, num=1;
    printf("Ingrese la cantidad de calificaciones(minimo 2):\n");
    scanf("%d", &tam);
    while(tam<2){
        printf("Error\nIngrese la cantidad de calificaciones(minimo 2):\n");
        scanf("%d", &tam);
    }

    float array[tam];

    for(int i=0; i<tam; i++){
        printf("Ingrese la %dº calificacion\n", num);
        scanf("%f", &array[i]);
        while(array[i]<0 || array[i]>10){
            printf("Calificacion invalida, intente de nuevo\nIngrese la %dº calificacion\n", num);
            scanf("%f", &array[i]);
            }
            num++;
    }

    for(int i=0; i<tam; i++){
        suma=suma+array[i];
        if(array[i]>=7){
            ap=ap+1;
        }
        else{
            rp=rp+1;
        }
    }

    promedio=suma/tam;
    app=(ap*100)/tam;
    rpp=(rp*100)/tam;
    printf("Promedio total:%.1f\n", promedio);
    if(promedio>=7){
        printf("Promedio aprobatorio\n");
    }
    else{
        printf("Promedio reprobatorio\n");
    }
    printf("Cantidad de materias aprobadas:%d\n", ap);
    printf("Cantidad de materias reprobadas:%d\n", rp);
    printf("Porcentaje de materias aprobadas:%.1f%\n", app);
    printf("Porcentaje de materias reprobadas:%.1f%\n", rpp);
    return 0;
}
