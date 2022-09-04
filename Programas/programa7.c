/* 7) Capture do teclado valores para preenchimento de uma matriz M
3x3. Após a captura imprima a matriz criada e encontre a
quantidade de números pares, a quantidade de números ímpares.*/

#include<stdio.h>

int M[3][3], i, j, Qtdpar=0, Qtdimpar=0;

void entrada (){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("Elemento[%d][%d]= ",i,j);
          scanf("%d",&M[i][j]);
        }
    }
}
void saida (){
    printf("\n  Valores originais da matriz\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",M[i][j]);
            printf("\n");
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(M[i][j]%2==0){
                Qtdpar++;
            }
            else{
                Qtdimpar++;
            }
        }
    }
    printf("\n Quantidade de elementos par = %d \n",Qtdpar);
    printf("\n Quantidade de elementos impar = %d \n",Qtdimpar);
}

int main(){
    entrada ();
    saida();
    return 0;
}