
O que fazem os seguintes programas em C?

#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;                       
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}

/*
Mostra os elementos de vet

Mostra os elementos de vet na base hexadecimal
*/
