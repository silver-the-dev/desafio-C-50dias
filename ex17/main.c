#include <stdio.h>

void retornaBinario(int valor){
    int resultado = valor;
    int i = 0;
    char printar[32];
    do {
        printar[i++] = resultado % 2 == 0 ? '0' : '1';
        resultado /= 2;
    } while(resultado > 0);

    for(int j = i; j >= 0; j--){
        printf("%c", printar[j]);
    }
}

int main(){
    retornaBinario(2539);
    printf("\n");
    return 0;
}