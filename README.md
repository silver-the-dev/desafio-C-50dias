# desafio-C-50dias

# 🚀 Roadmap C: Do Zero ao C++ (50 Exercícios)

(Esses exercícios foram gerados por IA mas feitos totalmente sem o uso dela)

## 🟢 Nível 1: Fundamentos e Lógica (O Básico)

- [x] **1. Hello World Profissional:** Imprima "Hello World" e o tamanho de cada tipo básico (`int`, `float`, `double`, `char`) em bytes usando `sizeof`.
- [x] **2. Conversor de Unidades:** Receba uma temperatura em Celsius e converta para Fahrenheit e Kelvin.
- [x] **3. Calculadora de Resistores:** Receba três valores de resistência e calcule a resistência equivalente em série e paralelo.
- [x] **4. Média de Notas:** Receba 4 notas, calcule a média e diga se o aluno foi aprovado (>= 7), recuperação (5 a 6.9) ou reprovado.
- [x] **5. Par ou Ímpar:** Verifique se um número é par ou ímpar usando o operador de resto `%`.
- [x] **6. O Maior de Três:** Receba três números e imprima o maior deles sem usar funções prontas.
- [x] **7. Ano Bissexto:** Verifique se um ano fornecido pelo usuário é bissexto.
- [x] **8. Simulador de Caixa Eletrônico:** Receba um valor inteiro e diga quantas notas de 100, 50, 20 e 10 são necessárias.
- [x] **9. Tabuada Dinâmica:** Peça um número e imprima sua tabuada de 1 a 10 usando um laço `for`.
- [x] **10. Soma de Intervalo:** Calcule a soma de todos os números entre A e B fornecidos pelo usuário.

## 🟡 Nível 2: Laços de Repetição e Funções

- [x] **11. Fatorial:** Calcule o fatorial de um número usando um laço `while`.
- [ ] **12. Números Primos:** Verifique se um número inserido é primo.
- [ ] **13. Sequência de Fibonacci:** Imprima os primeiros N termos da sequência.
- [ ] **14. Inversão de Número:** Receba 1234 e imprima 4321 usando operações matemáticas (sem strings).
- [ ] **15. Cálculo de Potência:** Crie uma função `minha_pow(base, exp)` que não use a biblioteca `math.h`.
- [ ] **16. MDC:** Implemente uma função que calcule o Máximo Divisor Comum entre dois números.
- [ ] **17. Conversor Binário:** Receba um número decimal e imprima sua representação binária.
- [ ] **18. Menu Interativo:** Crie um menu usando `switch/case` que só fecha quando o usuário digita 'S'.
- [ ] **19. Verificador de Triângulos:** Função que recebe 3 lados e diz se é equilátero, isósceles ou escaleno.
- [ ] **20. Cronômetro Simples:** Use um laço e a função `sleep` para fazer uma contagem regressiva.

## 🟠 Nível 3: Arrays e Strings (Manipulação de Dados)

- [ ] **21. Maior e Menor no Vetor:** Preencha um vetor de 10 posições e encontre o maior e o menor valor.
- [ ] **22. Inverter Vetor:** Inverta a ordem dos elementos de um vetor "in-place" (sem criar um segundo vetor).
- [ ] **23. Busca Linear:** Verifique se um número existe em um array e retorne seu índice.
- [ ] **24. Ordenação Bubble Sort:** Implemente o algoritmo Bubble Sort para ordenar um vetor de inteiros.
- [ ] **25. Matriz Identidade:** Gere uma matriz identidade de ordem N.
- [ ] **26. Soma de Matrizes:** Some duas matrizes 3x3 e exiba o resultado.
- [ ] **27. Palíndromo:** Verifique se uma string (ex: "arara") é um palíndromo.
- [ ] **28. Contador de Vogais:** Conte quantas vogais existem em uma frase digitada pelo usuário.
- [ ] **29. Concatenação Manual:** Concatene duas strings sem usar `strcat`.
- [ ] **30. Cifra de César:** Implemente uma criptografia simples que desloca cada letra da string em 3 posições.

## 🔴 Nível 4: Pointers e Memória (O Coração do C)

- [ ] **31. Troca com Ponteiros:** Crie uma função `swap(int *a, int *b)` que troque o valor de duas variáveis.
- [ ] **32. Aritmética de Ponteiros:** Percorra e imprima um vetor usando apenas ponteiros e incrementos (`p++`), sem usar colchetes `[]`.
- [ ] **33. Ponteiro de Ponteiro:** Crie um exemplo que use um ponteiro para ponteiro (`int **p`) e explique o que acontece na memória.
- [ ] **34. Malloc de Vetor:** Peça ao usuário o tamanho de um vetor, aloque-o dinamicamente usando `malloc` e preencha-o.
- [ ] **35. Free e Memory Leak:** Crie um programa que aloque memória e libere-a corretamente. Use o `valgrind` no seu Fedora para checar se há vazamentos.
- [ ] **36. String Dinâmica:** Leia uma string de tamanho desconhecido usando `realloc` conforme o usuário digita.
- [ ] **37. Matriz Dinâmica:** Aloque uma matriz de forma que as linhas possam ter tamanhos diferentes.
- [ ] **38. Cópia de Memória:** Implemente sua própria versão da função `memcpy`.
- [ ] **39. Ponteiro de Função:** Crie uma função `calcular` que recebe um ponteiro para outra função (soma ou subtração) e a executa.
- [ ] **40. Array de Ponteiros:** Crie um array de strings (ponteiros para char) e ordene as strings em ordem alfabética.

## 🛡️ Nível 5: Structs, Bitwise e Arquivos (Engenharia)

- [ ] **41. Inventário de Componentes:** Crie uma `struct Componente` (nome, valor, quantidade) e faça um sistema simples de cadastro.
- [ ] **42. Calculadora de Distância:** Use uma `struct Ponto {float x, y;}` e calcule a distância entre dois pontos.
- [ ] **43. Manipulação de Bits (Set/Clear):** Crie macros para setar (`SET_BIT`), limpar (`CLEAR_BIT`) e testar (`TEST_BIT`) um bit específico de uma variável.
- [ ] **44. Extração de Cores (RGB):** Dado um inteiro de 32 bits representando uma cor HEX, extraia os valores de R, G e B usando máscaras de bits e deslocamento (`>>`).
- [ ] **45. Escrita em Arquivo:** Salve os dados da sua `struct Componente` em um arquivo `.txt`.
- [ ] **46. Leitura de Arquivo:** Leia o arquivo gerado no exercício anterior e reconstrua o array de structs na memória.
- [ ] **47. Binário de Imagem (PPM):** Gere um arquivo de imagem simples no formato `.ppm` (texto plano) criando um degradê de cores via código.
- [ ] **48. Lista Encadeada Simples:** Implemente uma lista onde cada nó aponta para o próximo. Adicione e remova elementos.
- [ ] **49. Recursividade:** Calcule o n-ésimo termo de Fibonacci usando recursão e compare o tempo com a versão iterativa.
- [ ] **50. O Grande Final:** Crie um simulador de registro de processador: use uma `union` e `struct` com _bit-fields_ para acessar bits individuais de um registrador de 8 bits.
