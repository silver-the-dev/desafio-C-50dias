#include <stdio.h>

int main(){
  char palavra1[50] = {0};
  printf("Digite a primeira palavra: ");
  scanf("%49s", &palavra1);
  printf("Digite a segunda palavra: ");
  char palavra2[50];
  scanf("%49s", &palavra2);
  int contador;
  for(contador = 0; palavra1[contador] != '\0'; contador++);
  int tamanho1 = contador;
  for(contador = 0; palavra2[contador] != '\0'; contador++);
  int tamanho2 = contador;
  char terceiraPalavra[tamanho1 + tamanho2];
  contador = 0;
  for(int i = 0; i < tamanho1; i++){
    terceiraPalavra[i] = palavra1[i];
    contador++;
  }
  for(int i = contador; i < tamanho2 + contador; i++){
    terceiraPalavra[i] = palavra2[i - contador];
  }
  terceiraPalavra[tamanho1 + tamanho2 + 1] = '\0';
  printf("%s\n", terceiraPalavra);

  return 0;
}
