//Escrever um programa que efetua leitura de um determinado valor num�rico decimal (float) na entrada,
//armazene-o em alguma vari�vel e depois o imprima na console. Obs. O valor deve ser impresso com 3 casas decimais.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n;
	
	printf("Entre com um valor numerico float: \n");
	
	scanf("%f",&n);
	
	printf("\n0 valor entrado foi: %.3f",n);
	
	return 0;
}
