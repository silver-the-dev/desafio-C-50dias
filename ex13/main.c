#include <stdio.h>

void fibonacci(int termos){
    int termo = 1, anterior = 0, resultado;
    printf("Resultados:\n");
    termos--;
    for(int i = 0; i < termos; i++){
        resultado = termo + anterior;
        printf(i < termos - 1 ? "%d, " : "%d\n", resultado);
        anterior = termo;
        termo = resultado;
    }
}

int main(){
    int termos, resultados;
    printf("Quantos termos da sequência de Fibonnacci deseja calcular? ");
    scanf("%d", &termos);
    fibonacci(termos);
}