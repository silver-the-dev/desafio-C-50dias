#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Alocando memória...");
    int *array;
    array = malloc(4 * sizeof(int));
    for(int i = 0; i < 4; i++){
        array[i] = i;
        printf("%d, ", array[i]);
    }
    free(array);
    array=NULL;
    return 0;
}