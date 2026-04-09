#include <stdio.h>
#include <stdint.h>
int calculaMDC(int a, int b){
    int resultado = 1;
    int divisor = 2;
    while(a != 1 && b != 1){
        uint8_t divideA = 0;
        uint8_t divideB = 0;
        if(a % divisor == 0) { 
            divideA = 1; 
            a /= divisor; 
        }
        else { divideA = 0;}
        if(b % divisor == 0) { 
            divideB = 1; 
            b /= divisor; 
        }
        else {divideB = 0;}
        if(!divideA && !divideB){
            divisor++;
        } if(divideA && divideB) {
            resultado *= divisor;
        }
    }

    return resultado;
}

int main(){
    printf("Função pra calcular o MDC de dois números: ");
    printf("%d\n", calculaMDC(48, 80));
    return 0;
}