#include <stdio.h>

int retornaIndice(int vetor[], int escolha){
    for(int i = 0; i < 10; i++){
        if(escolha == vetor[i]) { return i; }
    } return -1;
}

int main(){
    int vetor[10] = { 1, 4, 9, 32, 16, 29, 48, 5, 3 };
    printf("Digite um número: ");
    int escolha;
    scanf("%d", &escolha);
    int indice = retornaIndice(vetor, escolha);
    if(indice != -1){
        printf("%d está no índice: %d\n", vetor[indice], indice);
    } else {
        printf("Índice indisponível");
    }
    return 0;
}