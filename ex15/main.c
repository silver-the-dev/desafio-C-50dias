#include <stdio.h>

long int potencia(long int num, int exp){
    long int numInicial = num;
    for(int i = 0; i < exp-1; i++){
        printf("%ld * %ld = %ld\n", num, numInicial, num * numInicial);
        num = num * numInicial;
    }
    return num;
}
int main(){
    printf("%ld\n", potencia(2, 2)); // <- 62 é o limite
    return 0;
}