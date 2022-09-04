/* 8) Crie um programa receba os valores e faça a soma de duas
matrizes 3x3.*/

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int M[3][3], M2[3][3], soma[3][3];
int i, j;

void entrada1(){
    printf(" \n Informe os elementos da Matriz M \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Elemento[%d][%d]= ",i,j);
            scanf("%d",&M[i][j]);
        }
    }
}

void saida1(){
    printf("\n  Valores da matriz M \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",M[i][j]);
            printf("\n");
        }
    }
}

void entrada2(){
    printf("\n\n Informe os elementos da Matriz M2 \n\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]= ", i, j);
            scanf("%d",&M2[i][j]);
        }
    }
}

void saida2(){
    printf("\n  Valores da matriz M2 \n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("%d ",M2[i][j]);
            printf("\n");
        }
    }
}

void somaMatriz (){
    for(i = 0 ; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma[i][j]=M[i][j]+M2[i][j];
        }
    }
}

void matrizResultado(){
    printf("\n Matriz resultante da soma\n\n  ");

    for(i = 0; i < 3; i++){
        for(j=0;j<3;j++){
            printf("\t %d ",soma[i][j]);
            printf("\n");
        }
    }
}
main(){
    entrada1();
    saida2();
    entrada2();
    saida2();
    somaMatriz();
    matrizResultado();
    return 0;
}