/* 4) Faça um programa em Linguagem C que lê uma matriz de 3 x 3
elementos usando um comando for, multiplica cada elemento por
5 e imprime o resultado.*/

#include<stdio.h>
#include <stdlib.h>

int matriz[3][3];
int i,j;

void entrada(){
    printf("\t \n Digite os valores da matriz : \n");
    for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
          scanf("%d",&matriz[i][j]);
      }
    }
}

void multiplica(){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = matriz[i][j] * 5;
            printf("\n");
        }
    }
}

void saida(){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
          printf("%d ",matriz[i][j]);
          printf("\n");
        }
    }
}

main(){
    entrada();
    multiplica();
    saida();
    return 0; 
}