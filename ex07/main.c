#include <stdio.h>

int main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("O ano é Bissexto\n");
    } else{
        printf("O ano não é Bissexto\n");
    }

    return 0;
}