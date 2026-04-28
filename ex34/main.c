#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite o tamanho de um vetor: ");
    int n;
    int *array;
    scanf("%d", &n);

    array = (int *) malloc(n * sizeof(int));

    if(array == NULL){
        printf("Memória Insuficiente");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
        printf("Elemento: %d\n", array[i]);
    }
    
    free(array);
    array = NULL;

    return 0;
}