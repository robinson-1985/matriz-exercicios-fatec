/* 6) Receba e faça a Soma dos elementos pares da matriz e escreva o
resultado na tela.*/

#include<stdio.h>

int matriz[3][3], i, j, soma_par = 0;

void entrada(){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
          printf("Elemento[%d][%d]= ", i, j);
          scanf("%d",&matriz[i][j]);
        }
    }
}

void saida(){
    printf("\n  Valores originais da matriz\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
            printf("\n");
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j]%2==0){
              soma_par=soma_par+matriz[i][j];
            }
        }
    }

    printf("\n A soma dos elementos par =%d \n",soma_par);
}

int main(){
    entrada();
    saida();
    return 0;
}