#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//As Somas da diagonal secundaria e principal e aa medias delas

int main(){
	int i,j,soma,div=0,soma2=0,div2=0;
	int matriz[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	float media=0,media2=0;
	
	for (i=0;i<4;i++){  //LINHAS
		for(j=0;j<4;j++){ //COLUNAS
			printf("%3d",matriz[i][j]); //printar a matriz
			if(i==j){
				soma +=	matriz[i][j]; //soma diagonal principal
				div++;
			}
			//formula n-1-i
			if(j ==4-1-i){ //o 4 é o numero da matriz 4x4 
				soma2 += matriz[i][j];
				div2++;
			}
			//if(i+j==3)
			//isso tbm vai dar a diagonal secundaria o 3 é pq comaça em 0 e não em 1
		}
		printf("\n");//Quebra a linha pq ce nao fudeo
	}
	printf("\n=============================");
	media=soma/div;
	media2=soma2/div2;
	printf("\nA soma da diagonal principal:%d e a media=%.2f",soma,media);
	printf("\nA soma da diagonal secundaria:%d e a media=%.2f",soma2,media2);
}
