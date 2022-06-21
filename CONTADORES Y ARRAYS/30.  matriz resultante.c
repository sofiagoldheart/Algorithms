#include <stdio.h>

int main(){
    int m1[3][3];
    printf("Primera matriz\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingresa un valor[%d][%d]:", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    int m2[3][3];
    printf("Segunda matriz\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingresa un valor[%d][%d]:", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    int mr[3][3];
    printf("Matriz resultante\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mr[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d", mr[i][j]);
        }
        printf("\n");
    }
}
