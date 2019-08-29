/*
Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação.
 Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação.
*/
#include <stdio.h>
#include <stdlib.h>

int ordena(void *a, void *b){
        if(*(int *)(a) == *(int *)(b)){
            return 0; // Caso os dois valores comparados sejam iguais
        }else{
            if(*(int *)(a) < *(int *)(b)){
                return -1; // Caso "a" seja menor que "b"
            }else{
                return 1; // Caso "a" seja maior que "b"
            }
        }
    }


void ordenaNew(float *v,int tamVetor, int tamBytes, int (*p)(int *, int *)){

    int i, j;
    float temp=0;

    for(i=0;i<tamVetor;i++){
        for(j=0;j<tamVetor-1;j++){
            if(p(&v[j], &v[j+1]) == 1){
                temp = *(v + j);
                *(v + j) = *(v + j+1);
                *(v + j+1) = temp;
            }else{

            }
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

    ordenaNew(vetor, 10, sizeof(float), ordena);

    printf("\n\n\n\n\n");
    printf("Depois da troca: ");

    for(k=0; k<10; k++){
        printf("%.2f ", vetor[k]);
    }
    printf("\n");
    return 0;
}