#include <stdio.h>

int main(){
    printf("Insira a opção: ");
    char opt;
    
    do{
        scanf("%c", &opt);
        printf("\nOpções: \nI - Imprimir Hello World\nC - Calcular soma de 2 + 2\nS - Sair\n");
        switch (opt) {
        case 'I':
        case 'i':
            printf("Hello world\n");
            break;
        case 'C':
        case 'c':
            printf("2 + 2 = 4\n");
            break;
        case 's':
        case 'S':
            return 0;
        default:
            break;
        }
    } while(opt != 's' || opt != 'S');
    return 0;
}