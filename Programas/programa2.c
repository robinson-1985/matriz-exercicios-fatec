/* 2) Crie um programa que receba valores do usuário para preencher
uma matriz, e em seguida, exiba a soma dos valores dela e a
soma dos valores da primeira diagonal,ou seja, diagonal principal.*/

#include<stdio.h>

int linha, coluna, soma = 0, soma_diagonal;
int matriz[3][3];

void entrada(){
	 printf("Digite os valores: ");
}

void process(){
    for(linha = 0; linha < 3; linha++)
     {
        for(coluna = 0; coluna < 3; coluna++)
         {
           scanf("%d", &matriz[linha][coluna]);
           soma=soma+matriz[linha][coluna];
         }
     }
}

void saida(){
    printf("\n\n A soma dos valores: %d\n", soma);
    soma_diagonal=matriz[0][0]+matriz[1][1]+matriz[2][2];
    printf("A soma da diagonal principal= %d\n\n",soma_diagonal);
    }


main(){
    entrada();
    process();
    saida();
    return 0;
}