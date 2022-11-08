//Escrever um programa que efetua leitura de um determinado valor numérico decimal (double) na entrada,
//armazene-o em alguma variável e depois o imprima na console. Obs. O valor deve ser impresso com 2 casas decimais.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double n;
	
	printf("Entre com um valor numerico double: \n");
	
	scanf("%lf",&n);
	
	printf("\n0 valor entrado foi: %.2f",n);
	
	return 0;
	
}

	
