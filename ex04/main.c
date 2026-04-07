#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4;
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf("\nDigite a nota 4: ");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nMédia: %.2f\n", media);

    return 0;
}