#include <stdio.h>

void retornaTipoTriangular(int angulos[3]){
    int equilatero = 1;
    int isoceles = 0;
    int escaleno = 0;
    for(int i = 0; i < 3; i++){
        if(angulos[i] != 60) equilatero = 0;
    } 
    for(int i = 0; i < 3; i++){
        int iso = 0;
        for(int j = 0; j < 3; j++){
            if(j != i){ if(angulos[i] == angulos[j]){ iso++; }}
        }
        if (iso == 1) isoceles = 1;
    }

    if(angulos[0] != angulos[1] && angulos[0] != angulos[2] && angulos[1] != angulos[2]){ escaleno = 1; }

    if(isoceles == 1 && equilatero == 0){ printf("Isoceles\n");}
    if(equilatero == 1){ printf("Equilátero\n"); }
    if(escaleno == 1) { printf("Escaleno\n"); }
}

int main(){
    int angulos[3];
    printf("Digite os três ângulos de um triângulo: \n");
    printf("Ângulo 1: ");
    scanf("%d", &angulos[0]);
    printf("Ângulo 2: ");
    scanf("%d", &angulos[1]);
    printf("Ângulo 3: ");
    scanf("%d", &angulos[2]);
    retornaTipoTriangular(angulos);
    return 0;
}