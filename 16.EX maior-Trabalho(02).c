#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/*-Escreva um algoritmo que leia uma matriz 3x4 e calcule a média dos valores
por linha. Essa média deve ser armazenada em um vetor de 3 linhas.*/

int main(){
	float C[3][4]={4.0,8.0,6.0,7.0,3.0,9.0,7.5,8.5,6.5,4.0,7.5,6.0};
	int i,j,cont,aluno=4;
	float media,soma;
	printf("Quantas notas por aluno:");
	scanf("%d",&aluno);
	//Entrada de dados
	printf("Insira os valores para a matriz 3x4: \n" );
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf("insira o valor no elemento %d %d: ",i,j);
			scanf("%f",&C[i][j]);
		}
	}
	
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
		printf("%.2f ",C[i][j]);
	}
	printf("\n");
	}
	printf("\n===================================================================================\n");
	for(i=0;i<3;i++){ //Linhas
		for(j=0;j<4;j++){ //Colunas
			soma +=C[i][j];	
			media=soma/aluno;
		}
		printf("\nA media da Linha [%i]:%.2f",i,media);
		printf("\n");
		soma=0;
		media=0;
	}	
	getch();
	
}
