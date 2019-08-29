/*
Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. O processo de instalação dessa biblioteca em sistemas Windows pode ser um pouco trabalhoso. Entretanto, em sistemas Unix, a instalação é bem simples, de sorte que se recomenda a resolução desta questão em uma máquina, por exemplo, com Linux instalado.
Caso seja usuário Windows e não queira instalar sistemas alternativos em seu computador, use uma ferramenta de virtualização (ex: VirtualBox) para instalar e executar o Linux sem alterar a instalação original de seu computador.
Prepare um pequeno programa-exemplo demonstrando como usar a biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>
#include "gc.h"

int main(){
    int i;
    //a biblioteca GC tem como maior propósito coletar o lixo deixado por alocações dinâmicas sem que o programador precise liberar (com a função free(), por exemplo) a memória alocada.
    //a próxima linha inicializa a biblioteca, só é necessário em algumas plataformas, mas por via da dúvida a utilizaremos.
    GC_INIT();

    for(i=0;i<100000;i++){
        int **ponteiro = (int**) GC_MALLOC(sizeof(int*));
        if (i % 100000 == 0)
            printf("Heap size = %d\n", GC_get_heap_size());
    }
    
    /*se o usuário compromete que o objeto resultante não contenha quaisquer ponteiros, pode utilizar a função GC_MALLOC_ATOMIC(),
    que também dealoca qualquer de seus produtos que sejam desreferenciados, mas a memória não é limpa depois da dealocação.*/
    for(i=0;i<100000;i++){
        int *ponteiro = (int*) GC_MALLOC_ATOMIC(sizeof(int));
        if (i % 100000 == 0)
            printf("Heap size = %d\n", GC_get_heap_size());
    }
    
    for(i=0;i<100000;i++){
        int *root = (int*) GC_MALLOC_UNCOLLECTABLE(sizeof(int));
        int **realocado = (int**) GC_MALLOC(sizeof(int*));
        *realocado = (int*)GC_REALLOC(root, 2*sizeof(int));
        GC_FREE(root);
        printf("Heap size = %d\n", GC_get_heap_size());
    }
    
    //por fim, existe uma função que força a coleta de lixo, GC_gcollect().
    GC_gcollect();
    
    return 0;

    }