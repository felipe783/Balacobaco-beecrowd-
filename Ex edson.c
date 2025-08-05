#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	int i,x,aux;
	float media,mediaP,aux2,aux3;
	printf("Quantas notas do aluno:");
	scanf("%i",&aux);
	float pesos[aux], notas[aux];
	for(i=0;i<aux;i++){
		printf("\nFale %iº nota do aluno:",i+1);
		scanf("%f",&notas[i]);
		printf("\nFale o peso da nota:");
		scanf("%f",&pesos[i]);
		aux3 +=pesos;
	}
	//Media
	for(i=0;i<aux;i++){
		aux2+=notas[i];
	}
	//MediaP
	float nota2[aux];
	for(i=0;i<aux;i++){
		nota2[i]=notas[i]*pesos[i];
		aux3 +=nota2[i];
		
	}
	media=aux2/aux;
	mediaP=aux3/aux3;
	printf("\nMedia= %.2f",media);
	printf("\nMedia Ponderada= %.2f",mediaP);
	if(mediaP>=7){
		printf("\nAprovado");
	}
	else{
		if((mediaP<7)&&(mediaP>=3)){
			printf("\nExame");
		}
		else{
			printf("\nReprovado");
		}
	}

}

