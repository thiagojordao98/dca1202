/*
Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. 
Utilize alocação dinâmica de memória para realizar a tarefa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void troca(float v[], float *a, int tam){
    int i, j;
    strcpy(a, v);
    float temp = 2;
    for(i=0;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int k, h;
    float *p;
    float vetor[10] = {9.3, 4.2, 8.1, 26.2, 5.7, 4.54, 3213.4, 2.2, 1.3, 5.3};
    void (*q)(float *, float *, int); //Ponteiro para a função troca
    q = troca;

    p = (int *) (malloc(10*sizeof(float))); //Reserva 40 bytes de memória a ser alocada

    printf("Vetor antes de ser trocado: ");

    for(h=0; h<10; h++){
        printf("%.2f ", vetor[h]);
    }

    q(vetor, p, 10); // Chama a função troca 

    printf("\n\n\n\n\n");
    printf("Depois da troca: ");

    for(k=0; k<10; k++){
        printf("%.2f ", *(p+k));
    }

    printf("\n");

    free(p);
    return 0;
}