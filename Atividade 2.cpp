//Escrever um programa que efetua leitura de um determinado valor numérico inteiro na
//entrada, armazene-o em alguma variável e depois o imprima na console.

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Entre com um valor numerio inteiro: \n");
	
	scanf("%d",&n);
	
	printf("O valor entrado foi: %d\n\n", n);
	
	return 0;	
}
