// Escrever um programa que efetua leitura de um determinado caractere na entrada, armazene-o em alguma variável e depois o imprima na console.

#include <stdio.h>
int main () 
{
	char entrada;
	
	printf("Entre com um caractere qualquer: \n");
	scanf("%c",&entrada);
	printf ("O caractere entrada foi: %c\n\n", entrada);
	
	return 0;
}
