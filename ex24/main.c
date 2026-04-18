#include <stdio.h>

int main(){
    int vetor[10] = { 10, 7, 3, 4, 9, 1, 8, 2, 5, 6};
    
    int estaOrdenado;
    do {
        estaOrdenado = 1;
        for(int i = 0; i < 9; i++){
            int temp;
            if(vetor[i] > vetor[i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                estaOrdenado = 0;
            }
        }
    } while(estaOrdenado == 0);
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
}