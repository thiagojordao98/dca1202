/*
O que é um ponteiro para uma função? Pesquise na Internet referências
 sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.
*/


#include <stdio.h>

int multi(int a, int b){

	    return a*b;
	}	

	int main()
	{
	   int (*p)(int, int); 
	   int a, b, w;

	   p = multi; 
   
   	printf("Digite dois valores inteiros: ");
	   scanf("%i %i", &a, &b);


	   w = p(a, b); 

	   printf("\n");
	   printf(" result: %i\n", w);

	    return 0;
	}