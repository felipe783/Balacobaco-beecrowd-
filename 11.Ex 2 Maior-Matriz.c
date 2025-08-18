#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int i,j;
	int matrizA[3][3]{
		{5,8,2},
		{7,4,9},
		{6,1,3}
	};
	int matrizB[3][3] = {3,9,1,2,5,7,8,0,4};
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
