#include <stdio.h>
#include <string.h>

struct datos_persona{
    char nombre[15];
    int edad;
    float peso;
}user;

int main(){
    int op=0, check=0;
    do{
        printf("Opcion 1:Insertar datos\n");
        printf("Opcion 2:Modificar datos\n");
        printf("Opcion 3:Visualizar datos\n");
        printf("Opcion 4:Salir\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
                printf("Ingrese el nombre:");
                scanf("%s", &user.nombre);
                printf("Ingrese la edad:");
                scanf("%d", &user.edad);
                printf("Ingrese el peso:");
                scanf("%f", &user.peso);
                check=1;
                break;
            }
            case 2:{
                int op2=0;
                do{
                    printf("\nOpcion 1:Modificar nombre\n");
                    printf("Opcion 2:Modificar edad\n");
                    printf("Opcion 3:Modificar peso\n");
                    printf("Opcion 4:Regresar\n");
                    scanf("%d", &op2);
                    switch(op2){
                        case 1:{
                            printf("\nEl nombre actual es:%s\nIngrese el nuevo nombre:", user.nombre);
                            scanf("%s", &user.nombre);
                            printf("Nombre guardado con exito\n");
                            break;
                        }
                        case 2:{
                            printf("\nLa edad actual es:%d\nIngrese la nueva edad:", user.edad);
                            scanf("%d", &user.edad);
                            printf("Edad guardada con exito\n");
                            break;
                        }
                        case 3:{
                            printf("\nEl peso es:%f\nIngrese el nuevo peso:", user.peso);
                            scanf("%f", &user.peso);
                            printf("Peso guardado con exito\n");
                            break;
                        }
                        case 4:{
                            break;
                        }
                    }
                }
                while(op2!=4);
                break;
            }
            case 3:{
                if(check!=0){
                    printf("El nombre es:%s", user.nombre);
                    printf("\nLa edad es:%d", user.edad);
                    printf("\nEl peso es:%f", user.peso);
                }
                else{
                    printf("No hay datos registrados\n");
                }
                break;
            }
            case 4:{
                break;
            }
            default:{
                printf("Opcion invalida\n");
                break;
            }
        }
    }
    while(op!=4);
    return 0;
}
