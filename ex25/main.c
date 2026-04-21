#include <stdio.h>

int main(){
    int valor;
    printf("Insira o tamanho da matriz identidade");
    scanf("%d", &valor);
    int matriz[valor][valor];
    for(int col = 0; col < valor; col++){
        for(int row = 0; row < valor; row++){
            matriz[row][col] = row == col ? 1 : 0;
            printf("%d ", matriz[row][col]);
        }
        printf("\n");
    }

    return 0;
}