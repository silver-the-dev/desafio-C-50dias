#include <stdio.h>

int main(){
    int nums[3];
    printf("Digite o primeiro valor: ");
    scanf("%d", &nums[0]);
    printf("Digite o segundo valor: ");
    scanf("%d", &nums[1]);
    printf("Digite o terceiro valor: ");
    scanf("%d", &nums[2]);

    int maior = 0;
    for(int i = 0; i < 3; i++){
        if(nums[i] > maior) maior = nums[i];
    }
    printf("%d", maior);

    return 0;
}