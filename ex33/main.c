#include <stdio.h>

int main(){
    int v = 22;
    int *p = &v;
    int **pp = &p;

    printf("v   = %d\n", v);
    printf("*p  = %d\n", *p);
    printf("**p = %d\n", **pp);
    return 0;
}