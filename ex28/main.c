#include <stdio.h>

int contarVogais(char palavra[]){
  int contador = 0;
  for(int i = 0; palavra[i] != '\0'; i++){
    switch (palavra[i]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        contador++;
        break;
      default:
        break;
    }
  }
  return contador;
}


int main(){
  printf("%d", contarVogais("arara"));
  return 0;
}
