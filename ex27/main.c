#include <stdio.h>

int verificaPalindromo(char palavra[]){
  int contador = 0;
  for(int i = 0; palavra[i] != '\0'; i++){
    contador++;
  }

  for(int i = contador-1, j = 0; j < contador; j++, i--){
    printf("%c - %c\n", palavra[i], palavra[j]);
    if(palavra[i] != palavra[j]){
      return 0;
    }
  }
  return 1;
}

int main(){
 printf("%d", verificaPalindromo("arara")); 
  return 0;
}
