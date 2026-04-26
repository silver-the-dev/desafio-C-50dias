#include <stdio.h>

void swap(int* a, int* b){
    int c = *b;
    *b = *a;
    *a = c;
}

int main(){
    int a = 10;
    int b = 20;
    printf("A: %d\nB: %d\n", a, b);
    swap(&a, &b);
    printf("A: %d\nB: %d\n", a, b);
    return 0;
}