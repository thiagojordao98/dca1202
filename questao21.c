/*
Com base no programa-exemplo da questão anterior, proponha uma aplicação que permita comparar o desempenho das funções tradicionais de alocação/liberação
 de memória da linguagem c (malloc/free) com as funções de gerenciamento de memória da biblioteca que você escolheu.
 A aplicação deverá ser capaz de ressaltar possíveis atrasos de tempo provenientes do coletor de lixo utilizado.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"

int main(){
    int i;
    clock_t start, end;
    double cpu_time_used;
     
    start = clock();
    for (i = 0; i < 1000000; i++){
       int *p = (int *) malloc(sizeof(int));
       free(p);
    }
    end = clock()-start;
    cpu_time_used = ((double)end)/CLOCKS_PER_SEC*1000;
    
    printf("as alocacoes com malloc demoraram %.2lf milissegundos",cpu_time_used);
    start = clock();
    for (i = 0; i < 1000000; i++){
       int *p = (int *) GC_MALLOC(sizeof(int));
    }
    end = clock()-start;
    cpu_time_used = ((double)end)/CLOCKS_PER_SEC*1000;
    
    printf("as alocacoes com a biblioteca GC demoraram %.2lf milissegundos",cpu_time_used);
    return 0;
}