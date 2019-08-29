/*
Seja o seguinte trecho de programa:

int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

Determine o valor das seguintes expressões:

p == &i;
*p - *q;
**&p;
3 - *p/(*q) + 7;
*/
#include <stdio.h>
#include <cmath>

int main()
{
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d\n",p == &i);
    printf("%d\n",*p - *q );
    printf("%d\n", **&p);
    printf("%d\n", 3 - *p/(*q) + 7 );
}

saída:

-> 1(true)
-> -2
-> 3
-> 10
