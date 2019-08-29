/*
Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas 
pelo programa com as respostas que você idealizou.
*/


#include <stdio.h>

int main()
{
    char vetchar[4]="goto";
    int vetint[4]={1,2,3,4};
    double vetdouble[4]={5, 6, 7, 8};

    printf("vetchar + 1= %ld\n", vetchar + 1);
    printf("vetchar + 2= %ld\n", vetchar + 2);
    printf("vetchar + 3= %ld\n\n", vetchar + 3);
    printf("vetint + 1= %ld\n", vetint + 1);
    printf("vetint + 2= %ld\n", vetint + 2);
    printf("vetint + 3= %ld\n\n", vetint + 3);
    printf("vetdouble + 1= %ld\n", vetdouble + 1);
    printf("vetdouble + 2= %ld\n", vetdouble + 2);
    printf("vetdouble + 3= %ld\n", vetdouble + 3);


    return 0;
}