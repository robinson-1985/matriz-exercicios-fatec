/* 3) Faça um programa em Linguagem C que leia uma matriz 6 x 6,
conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int matriz[4][4], contagem = 0;

void entrada(){
    for(int linha=0; linha<4; linha++){
        for(int coluna=0; coluna<4; coluna++){
            printf("%dª linha, %dª coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
   
    for(int linha=0; linha<4; linha++){
        for(int coluna=0; coluna<4; coluna++){
            if(matriz[linha][coluna] > 10){
               contagem++;
            }
        }
    }
}

void saida(){
    printf("\n\n Existem na matriz %d números maiores que 10.\n", contagem);
}

main(){
    entrada();
    saida();
    return 0;
}