#include <stdio.h>

int main(){
  printf("Digite o tamanho da String: ");
  int tamanho;
  scanf("%d", &tamanho);
  char palavra[tamanho];
  printf("Digite a palavra: ");
  scanf("%s", &palavra);
  int deslocamento;
  printf("Digite o tamanho do deslocamento: ");
  scanf("%d", &deslocamento);
  char palavraFinal[tamanho];
  for(int i = 0; i < tamanho; i++){
    char reserva = palavra[i];
    printf("Desloca: %c pos %d > %c pos %d\n", palavra[i], i, palavra[(i + deslocamento) % tamanho], (i + deslocamento) % tamanho);
    palavraFinal[i] = palavra[(i + deslocamento) % tamanho];
  }
  printf("Resultado: %s", palavraFinal);
  return 0;
}
