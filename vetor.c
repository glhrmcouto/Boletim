#include <stdio.h>

int main(){

int numAlunos;

printf("Quantos alunos serao cadastrados?\n");
 	scanf("%i", numAlunos);

float nota1[numAlunos], nota2[numAlunos];
int i = 0, j = 0;

 	for (; i < numAlunos; i++) {
 		printf("Primeira nota: \n");
 			scanf("%f", &nota1[i]);
 		printf("Segunda nota: \n");
 			scanf("%f", &nota2[i]);
system("cls");	
	 }
system("cls");
	for (; j < numAlunos; j++){
		printf("Primeira nota: ?%.2f \n", nota1[j]);
		printf("Segunda nota: ?%.2f \n", nota2[j]);
	i++;
	}
return 0;
}
