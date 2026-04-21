#include <stdio.h>

int main(){
    int valor;
    printf("Digite o tamanho das matrizes: ");
    scanf("%d", &valor);
    int mat1[valor][valor];
    printf("Agora digite o valor de cada elemento da primeira matriz:\n");
    for(int row = 0; row < valor; row++){
        for(int col = 0; col < valor; col++){
            printf("Row-%d|Col-%d: ", row+1, col+1);
            scanf("%d", &mat1[row][col]);
        }
        printf("\n");
    }
    int mat2[valor][valor];
    printf("Agora digite o valor de cada elemento da segunda matriz:\n");
    for(int row = 0; row < valor; row++){
        for(int col = 0; col < valor; col++){
            printf("Row-%d|Col-%d: ", row+1, col+1);
            scanf("%d", &mat2[row][col]);
        }
        printf("\n");
    }

    printf("--------Matrizes somadas--------\n\n");
    for(int row = 0; row < valor; row++){
        for(int col = 0; col < valor; col++){
            printf(" %d", mat1[row][col] + mat2[row][col]);
        }
        printf("\n");
    }
    return 0;
}