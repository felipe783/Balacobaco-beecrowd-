#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int i,j;
	int matrizA[3][3]{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int matrizB[3][3]{
		{10,11,12},
		{13,14,15},
		{16,17,18}
	};
	int matrizC[3][3]={0};
	
	for(i=0;i<3;i++){ //LINHAS
		for(j=0;j<3;j++){ //COLUNAS
			if(matrizA[i][j]<matrizB[i][j]){
				matrizC[i][j]=matrizA[i][j];
			}
			else{
				matrizC[i][j]=matrizB[i][j];
			}
			printf(" %i ",matrizC[i][j]);
		}
		printf("\n");//quebra linhas
	}
	
}
