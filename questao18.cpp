/*
Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1.
A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somaC(int vetorA[], int vetorB[], int vetorC[], int num){
    int i;

    for(i=0; i<num;i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i=0; i<num; i++){
        printf("%i ", vetorC[i]);
    }
    printf("\n");

}


int main()
{
    int tam, i;

    printf("Qauntos elementos seu Vetor soma tera?\n");
    scanf("%i",&tam);

    int *vetorA = (int *)(malloc(tam*sizeof(int)));

    for(i=0; i<tam;i++){
        vetorA[i] = i + 1;
    }
    int *vetorB = (int *)(malloc(tam*sizeof(int)));

    for(i=0; i<tam;i++){
        vetorB[i] = i - 2*1;
    }

    int *vetorC = (int *)(malloc(tam*sizeof(int)));

    somaC(vetorA, vetorB, vetorC, tam);


    return 0;
}
