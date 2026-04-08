#include <stdio.h>

int fatorial(int valor){
    for(int i = valor; i > 1;){
        valor *= --i;
    }
    return valor;
}

int main(){
    int valor;
    printf("N: ");
    scanf("%d", &valor);
    int res = fatorial(valor);
    printf("\nFatorial: %d\n", res);
    return 0;
}