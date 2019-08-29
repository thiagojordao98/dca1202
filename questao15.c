/*
Reimplemente o programa da questão anterior utilizando a função qsort() do C. 
Comente o seu código, explicando o que faz cada uma das linhas.
*/

#include <stdio.h>
	#include <stdlib.h>

	int compCres(void *a, void *b){
	    if(*(int *)(a) == *(int *)(b)){
	        return 0; // caso os valores forem iguais
	    }else{
	        if(*(int *)(a) < *(int *)(b)){
        	    return -1; // Caso "a" seja menor que "b"
	        }else{
	            return 1; // Caso "a" seja maior que "b"
	        }
	    }
	}

	int main()
	{
	    int k, h;
	    float vetor[10] = {9.3, 4.2, 8.1, 26.2, 5.7, 4.54, 3213.4, 2.2, 1.3, 5.3};


	    printf("Vetor antes de ser trocado: ");

	    for(h=0; h<10; h++){
        	printf("%.2f ", vetor[h]);
	    }

	    qsort(vetor, 10, sizeof(float), compCres); // chama a funçao qsort passando como parâmetros:
                	                               // endereço do Vetor que se ordena
        	                                       // tamanho do Vetor
                        	                       // tamanho em bytes de cada posição
                                	               // ponteiro para a função de compara


	    printf("\n\n\n\n");
	    printf("Depois da troca: ");

	    for(k=0; k<10; k++){
        	printf("%.2f ", vetor[k]);
	    }

	    printf("\n");
	    return 0;
	}