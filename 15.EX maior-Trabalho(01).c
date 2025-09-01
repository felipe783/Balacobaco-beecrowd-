#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//Definir um algoritmo que leia 2 vetores com 6 elementos cada. O algoritmo
//deve gerar uma matriz C de 6x2 onde a 1º coluna são valores de A e a 2º
//coluna valores de B

int main(){
	int A[6]={1,2,3,4,5,6};
	int B[6]={7,8,9,10,11,12};
	int C[6][2]={0};
	int j,i;
	
	for(i=0;i<6;i++){ //lINHAS
		for(j=0;j<2;j++){ //Colunas
			C[i][j]=A[i];
			if (j==1){
				C[i][j]=B[i];
			}
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			printf("%3d",C[i][j]);
		}
		printf("\n");
	}
}
