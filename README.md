# desafio-C-50dias
# 🚀 Roadmap C: Do Zero ao C++ (50 Exercícios)

## 🟢 Nível 1: Fundamentos e Lógica (O Básico)

- [x]  **Hello World Profissional:** Imprima "Hello World" e o tamanho de cada tipo básico (`int`, `float`, `double`, `char`) em bytes usando `sizeof`.
- [x]  **Conversor de Unidades:** Receba uma temperatura em Celsius e converta para Fahrenheit e Kelvin.
- [x]  **Calculadora de Resistores:** Receba três valores de resistência e calcule a resistência equivalente em série e paralelo.
- [x]  **Média de Notas:** Receba 4 notas, calcule a média e diga se o aluno foi aprovado (>= 7), recuperação (5 a 6.9) ou reprovado.
- [x]  **Par ou Ímpar:** Verifique se um número é par ou ímpar usando o operador de resto `%`.
- [x]  **O Maior de Três:** Receba três números e imprima o maior deles sem usar funções prontas.
- [x]  **Ano Bissexto:** Verifique se um ano fornecido pelo usuário é bissexto.
- [x]  **Simulador de Caixa Eletrônico:** Receba um valor inteiro e diga quantas notas de 100, 50, 20 e 10 são necessárias.
- [x]  **Tabuada Dinâmica:** Peça um número e imprima sua tabuada de 1 a 10 usando um laço `for`.
- [x]  **Soma de Intervalo:** Calcule a soma de todos os números entre A e B fornecidos pelo usuário.

## 🟡 Nível 2: Laços de Repetição e Funções

- [ ]  **Fatorial:** Calcule o fatorial de um número usando um laço `while`.
- [ ]  **Números Primos:** Verifique se um número inserido é primo.
- [ ]  **Sequência de Fibonacci:** Imprima os primeiros N termos da sequência.
- [ ]  **Inversão de Número:** Receba 1234 e imprima 4321 usando operações matemáticas (sem strings).
- [ ]  **Cálculo de Potência:** Crie uma função `minha_pow(base, exp)` que não use a biblioteca `math.h`.
- [ ]  **MDC:** Implemente uma função que calcule o Máximo Divisor Comum entre dois números.
- [ ]  **Conversor Binário:** Receba um número decimal e imprima sua representação binária.
- [ ]  **Menu Interativo:** Crie um menu usando `switch/case` que só fecha quando o usuário digita 'S'.
- [ ]  **Verificador de Triângulos:** Função que recebe 3 lados e diz se é equilátero, isósceles ou escaleno.
- [ ]  **Cronômetro Simples:** Use um laço e a função `sleep` para fazer uma contagem regressiva.

## 🟠 Nível 3: Arrays e Strings (Manipulação de Dados)

- [ ]  **Maior e Menor no Vetor:** Preencha um vetor de 10 posições e encontre o maior e o menor valor.
- [ ]  **Inverter Vetor:** Inverta a ordem dos elementos de um vetor "in-place" (sem criar um segundo vetor).
- [ ]  **Busca Linear:** Verifique se um número existe em um array e retorne seu índice.
- [ ]  **Ordenação Bubble Sort:** Implemente o algoritmo Bubble Sort para ordenar um vetor de inteiros.
- [ ]  **Matriz Identidade:** Gere uma matriz identidade de ordem N.
- [ ]  **Soma de Matrizes:** Some duas matrizes 3x3 e exiba o resultado.
- [ ]  **Palíndromo:** Verifique se uma string (ex: "arara") é um palíndromo.
- [ ]  **Contador de Vogais:** Conte quantas vogais existem em uma frase digitada pelo usuário.
- [ ]  **Concatenação Manual:** Concatene duas strings sem usar `strcat`.
- [ ]  **Cifra de César:** Implemente uma criptografia simples que desloca cada letra da string em 3 posições.

## 🔴 Nível 4: Pointers e Memória (O Coração do C)

- [ ]  **Troca com Ponteiros:** Crie uma função `swap(int *a, int *b)` que troque o valor de duas variáveis.
- [ ]  **Aritmética de Ponteiros:** Percorra e imprima um vetor usando apenas ponteiros e incrementos (`p++`), sem usar colchetes `[]`.
- [ ]  **Ponteiro de Ponteiro:** Crie um exemplo que use um ponteiro para ponteiro (`int **p`) e explique o que acontece na memória.
- [ ]  **Malloc de Vetor:** Peça ao usuário o tamanho de um vetor, aloque-o dinamicamente usando `malloc` e preencha-o.
- [ ]  **Free e Memory Leak:** Crie um programa que aloque memória e libere-a corretamente. Use o `valgrind` no seu Fedora para checar se há vazamentos.
- [ ]  **String Dinâmica:** Leia uma string de tamanho desconhecido usando `realloc` conforme o usuário digita.
- [ ]  **Matriz Dinâmica:** Aloque uma matriz de forma que as linhas possam ter tamanhos diferentes.
- [ ]  **Cópia de Memória:** Implemente sua própria versão da função `memcpy`.
- [ ]  **Ponteiro de Função:** Crie uma função `calcular` que recebe um ponteiro para outra função (soma ou subtração) e a executa.
- [ ]  **Array de Ponteiros:** Crie um array de strings (ponteiros para char) e ordene as strings em ordem alfabética.

## 🛡️ Nível 5: Structs, Bitwise e Arquivos (Engenharia)

- [ ]  **Inventário de Componentes:** Crie uma `struct Componente` (nome, valor, quantidade) e faça um sistema simples de cadastro.
- [ ]  **Calculadora de Distância:** Use uma `struct Ponto {float x, y;}` e calcule a distância entre dois pontos.
- [ ]  **Manipulação de Bits (Set/Clear):** Crie macros para setar (`SET_BIT`), limpar (`CLEAR_BIT`) e testar (`TEST_BIT`) um bit específico de uma variável.
- [ ]  **Extração de Cores (RGB):** Dado um inteiro de 32 bits representando uma cor HEX, extraia os valores de R, G e B usando máscaras de bits e deslocamento (`>>`).
- [ ]  **Escrita em Arquivo:** Salve os dados da sua `struct Componente` em um arquivo `.txt`.
- [ ]  **Leitura de Arquivo:** Leia o arquivo gerado no exercício anterior e reconstrua o array de structs na memória.
- [ ]  **Binário de Imagem (PPM):** Gere um arquivo de imagem simples no formato `.ppm` (texto plano) criando um degradê de cores via código.
- [ ]  **Lista Encadeada Simples:** Implemente uma lista onde cada nó aponta para o próximo. Adicione e remova elementos.
- [ ]  **Recursividade:** Calcule o n-ésimo termo de Fibonacci usando recursão e compare o tempo com a versão iterativa.
- [ ]  **O Grande Final:** Crie um simulador de registro de processador: use uma `union` e `struct` com *bit-fields* para acessar bits individuais de um registrador de 8 bits.ara acessar bits individuais de um registrador de 8 bits.
