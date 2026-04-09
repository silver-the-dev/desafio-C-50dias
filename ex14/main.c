#include <stdio.h>

int inverterNumeros4Dig(int valor){
    int primeiro = (valor / 1000) * 1;
    int segundo = ((valor/100) % 10) * 10;
    int terceiro = ((valor/10) % 10) * 100;
    int quarto = (valor % 10) * 1000;
    return primeiro + segundo + terceiro + quarto;
}

int main(){
    printf("%d", inverterNumeros4Dig(1234));
    return 0;
}