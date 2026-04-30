#include <stdio.h>

int main() {
	FILE* arq;
	int c;
	arq = fopen("arquivo.txt", "r");

	if (arq) {
		while ((c = getc(arq)) != EOF) {
			printf("%c", (char)c);
		}
	}
	printf("\n");
	return 0;
}
