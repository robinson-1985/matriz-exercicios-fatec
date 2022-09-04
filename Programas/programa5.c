/* 5) Crie um programa que recebe uma matriz de inteiros positivos e
substitui seus elementos de valor ímpar por -1 e os pares por +1.*/

#include<stdio.h>

int mat[5][5], i, j;
int valor_par=+1, valor_impar=-1;

void entrada(){
	  for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o valor de [%d][%d] = ",i,j);
            scanf("%d", &mat[i][j]);
                if(mat[i][j]%2 == 0){
                  mat[i][j] = valor_par;
                }
                else{
                  mat[i][j] = valor_impar;
                }
        }
    }
}

void saida(){
    printf("\n valores depois da substituicao \n\n");
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
              printf("mat[%d][%d]= %d",i,j,mat[i][j]);
              printf("\n");
            }
        }
}

main(){
    entrada();
    saida();
    return 0;
}