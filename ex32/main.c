#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < sizeof(vetor) / 4; i++){
        printf("%d ", *(vetor+i));
    }

    return 0;
}