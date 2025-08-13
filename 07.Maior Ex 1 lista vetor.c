#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i,aluno=0;
  float nota[5],media,aux,dif;
  //alunos
  for(i=0;i<5;i++){
    printf("Fale a nota do aluno:");
    scanf("%f",&nota[i]);
  aluno++;
  }
  //media
  for(i=0;i<5;i++){
    aux=nota[i]+aux;
  }
  media=aux/aluno;
  //diferença
  aluno=0;
  for(i=0;i<5;i++){
    dif=0;
    dif=nota[i]-media;
    aluno++;
    printf("\nA diferenca do aluno %i e: %.2f",aluno,dif);
  }
getch();
