#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main(void) {
	char palavra[100];
	int i, j, tamanho;
	int palindromo;
	printf("digite palavra:");
	fflush(stdout);
	scanf("%s", palavra);
	tamanho = strlen(palavra);

//verificar se é um palindromo
	for (i = 0, j = tamanho - 1; i < j; i++, j--) {
		printf("i: %c\n", palavra[i]);
		printf("j: %c\n", palavra[j]);
		if (palavra[i] != palavra[j]) {
			palindromo = 0;
			break;
		}
	}
	if (palindromo) {
		printf("\nA palavra é um palindromo.\n");
	} else{

		printf("\nA palavra não é um palindromo.\n");
	}

return 0;
}

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    if (left >= right) // Se o ponteiro da esquerda for maior ou igual ao da direita
        return 1; // É um palíndromo

    // Verifica se os caracteres nos extremos são iguais
    if (str[left] != str[right])
        return 0; // Não é um palíndromo

    // Chama recursivamente para o próximo par de caracteres
    return isPalindrome(str, left + 1, right - 1);
}

int main(void) {
    char palavra[100];
    int tamanho;

    printf("Digite uma palavra: ");
    fflush(stdout);
    scanf("%s", palavra);
    tamanho = strlen(palavra); // Verificar se é um palíndromo
    if (isPalindrome(palavra, 0, tamanho - 1)) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
```
