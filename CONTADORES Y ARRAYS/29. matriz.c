#include <stdio.h>

int main(){
    int m[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingresa un valor[%d][%d]", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nIntroduzca el valor de la posición (%d, %d): %d", i, j, m[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}
