#include <stdio.h>

void contarTroco(int valor){
    int nota100 = 0, nota50 = 0, nota20=0, nota10=0, nota5=0, nota2=0, moeda1 = 0;
    while(valor > 0){
        for(;valor / 100 > 0;){
            valor -= 100;
            nota100++;
        }
        for(;valor / 50 > 0;){
            valor -= 50;
            nota50++;
        }
        for(;valor / 20 > 0;){
            valor -= 20;
            nota20++;
        }
        for(;valor / 10 > 0;){
            valor -= 10;
            nota10++;
        }
        for(;valor / 5 > 0;){
            valor -= 5;
            nota5++;
        }
        for(;valor / 2 > 0;){
            valor -= 2;
            nota2++;
        }
        for(;valor / 1 > 0;){
            valor -= 1;
            moeda1++;
        }
    }
    printf("\nNotas de 100: %d", nota100);
    printf("\nNotas de 50: %d", nota50);
    printf("\nNotas de 20: %d", nota20);
    printf("\nNotas de 10: %d", nota10);
    printf("\nNotas de 5: %d", nota5);
    printf("\nNotas de 2: %d", nota2);
    printf("\nMoedas de 1: %d", moeda1);
}

int main(){
    contarTroco(453);
    return 0;
}