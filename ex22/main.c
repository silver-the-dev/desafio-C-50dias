#include <stdio.h>
#define TAM 10

int main(){
    int vetor[TAM] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int temp;
    for(int i = 0; i < 5; i++){
        temp = vetor[TAM-1-i];
        vetor[TAM-1-i] = vetor[i];
        vetor[i] = temp;
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}