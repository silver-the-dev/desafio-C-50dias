#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", i, num, i * num);
    }
    return 0;
}