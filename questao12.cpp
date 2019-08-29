/*
Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value;
scanf("%f", &aloha);
aloha = value";
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha;
pf = value;
pf = aloha;

*/

     > válido, está atribuindo 2.2 a posição 2 do vetor aloha
	 > válido, atribui um valor a primeira posição de aloha
	 > inválido
	 > válido, mostra o endereço do elemento aloha[0]
	 > válido, atribui o valor que está na posição 3 de aloha para
	   a posição na linha 4 coluna 4 da matriz coisas
	 > inválido
	 > válido
	 > válido, passa o &aloha[0]