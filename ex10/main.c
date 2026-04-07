#include <stdio.h>

int retornaIntervalo(int a, int b){
    int c;

    if(a > b){
        c = a - b;
    }
    if(a < b){
        c = b - a;
    }

    return c;
}

int main(){
    printf("Intervalo: %d\n", retornaIntervalo(8, 3));

    return 0;
}