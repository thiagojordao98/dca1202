/*Crie uma função capaz de realizar multiplicação matricial da forma C=ABC=AB. 
A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas de B). 
O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
*/
#include <stdlib.h>
#include <stdio.h>


// Atribui as dimensões das matrizes
void dime(int *nl, int *nc,char textoM[]) {
     printf("Digite a quantidade de linhas de %s\n",textoM);
     scanf("%d",nl);
     printf("Digite a quantidade de colunas de %s\n",textoM);
     scanf("%d",nc);
}
//atribuimat como ponteiro pra pegar os valores de cada elemento da matriz quer for pedida
int *atribuimat (int nl, int nc,char texto[]){
    int l,c;
    int *temp;
    temp = (int *) calloc((nl*nc), sizeof(int));
    if (temp) {
              for (l=0;l<nl;l++) {
                  for (c=0;c<nc;c++) {
                      printf("Digite o elemento [%d , %d] de %s\n",l+1,c+1,texto);
                      scanf("%d",&temp[(l*nc)+c]);
                  }
              }
    }else{

          puts("Erro na alocacao de memoria");
    }
    return temp;
}
//Multiplica opera com os ponteiros de cada matriz
void multiplica(int *matA, int *matB, int *matC, int nla, int nca, int ncb){
 int l,c,k;

     for (l=0;l<nla;l++){
         for (c=0;c<ncb;c++){
             matC[(l*ncb)+c]=0;
             for (k=0;k<nca;k++) {
                 matC[(l*ncb)+c]=matC[(l*ncb)+c] + matA[(l*nca)+k]*matB[(k*ncb)+c];
             }
         }
     }
}

//Print que recebe o valor de matC e imprime o resultado
void print(int nl, int nc, int *matC) {
 int l, c;
 for (l=0;l<nl;l++){
     for (c=0;c<nc;c++) {
         printf("\t %d", matC[(l*nc)+c]);
     }
     printf ("\n");
 }
}

//Método Main
int main(int argc, char *argv[])
{
    int nla,nca,nlb,ncb;
    int *matA,*matB,*matC;

    dime(&nla,&nca,"A");
    dime(&nlb,&ncb,"B");

    while (nca != nlb){
          printf("Matrizes sao incompativeis, digite novamente a quantidade de linhas de B: ");
          scanf("%d",&nlb);
    }
    printf("\nElementos da Matriz A\n");
    matA=atribuimat(nla,nca,"A");

    printf("\nElementos da Matriz B\n");
    matB=atribuimat(nlb,ncb,"B");

    matC= (int *) calloc((nla*ncb),sizeof(int));

    multiplica(matA,matB,matC,nla,nca,ncb); // Chama o metodo para multiplicar AB

    puts("\nResuldado da multiplicacao");
    print(nla,ncb,matC);
    return 0;
}

