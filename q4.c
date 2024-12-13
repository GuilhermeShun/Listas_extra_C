//Lista 6
//Questão 4

#include <stdio.h>

int A[4], B[4], C[4][2], i, j;
int numero_de_elementos_de_A = sizeof(A)/sizeof(A[0]);
int numero_de_elementos_de_B = sizeof(B)/sizeof(B[0]);
int numero_de_colunas_de_C = sizeof(C[0])/sizeof(C[0][0]);
int numero_de_linhas_de_C =sizeof(C)/sizeof(C[0]);

void main(){
    
    for(i=0; i<numero_de_elementos_de_A; ++i){
        scanf("%d", &A[i]);
    }
    
    for(i=0; i<numero_de_elementos_de_B; ++i){
        scanf("%d", &B[i]);
    }
    
    for(i=0; i<numero_de_linhas_de_C; ++i){
        for(j=0; j<numero_de_colunas_de_C; ++j){
            if(j==0){
                C[i][j] = A[i] * 2;
            }
            else if(j==1){
                C[i][j] = B[i] - 5;
            }
        }
    }
    
    for(i=0; i<numero_de_linhas_de_C; ++i){
        for(j=0; j<numero_de_colunas_de_C; ++j){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}