#include <stdio.h>

int main(){
    int parImpar;

    printf("Número: ");
    scanf("%d", &parImpar);

    if(parImpar % 2 == 0) printf("\nPar\n");
    if(parImpar % 2 != 0) printf("\nImpar\n");

    return 0;
}