#include <stdio.h>

int main(){
    int vetor[10] = {9, 20, 45, 32, 8, 10, 3, 4, 13, 11};
    int maior = -2147483647;
    int menor = 2147483647;

    for(int i = 0; i < 10; i++){
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}