//Escrever um programa que efetua leitura do primeiro nome de uma pessoa, armazene-o em
//alguma variável e depois o imprima na console.

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[40];
	
	printf("Entre com seu nome: \n");
	
	scanf("%s",&nome);
	
	printf("\n0 nome entrado foi: %s", nome);
	
	return 0;
}
