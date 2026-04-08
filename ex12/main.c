#include <stdio.h>

int ehPrimo(int n) {
    // Casos base
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("Digite um número pra verificar se é primo: ");
    int valor;
    scanf("%d", &valor);
    valor = ehPrimo(valor);
    if(valor == 1) printf("Verdadeiro\n");
    if(valor == 0) printf("Falso\n");
}