/* 1) Crie um programa que preencha todos os valores de uma matriz
2x2, e em seguida exiba todos os valores e a soma de todos os
valores. */

#include<stdio.h>
#include<locale.h>

float matriz[2][2], soma = 0;
int i, j;

void entrada(){
    printf("\t \n Digite os valores da matriz : \n");
}

void process (){
    for(i=0;i<2;i++)
    for(j=0;j<2;j++){
        scanf("%f",&matriz[i][j]);
    }

    for(i=0;i<2;i++)
    for(j=0;j<2;j++){
        soma=soma+matriz[i][j];
    }
}

void saida (){
    printf(" Os valores são: \n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++){
        printf("%.1f\n",matriz[i][j]);
    }

    printf("A soma é = %.1f\n",soma);
}

main(){
    entrada();
    process();
    saida();
    return 0;
}