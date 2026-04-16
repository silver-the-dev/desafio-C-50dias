#include <stdio.h>
#include <unistd.h>

int main(){
    int contador = 20;
    while(contador > 0){
        printf("%d\n", contador--);
        sleep(1);
    }
}