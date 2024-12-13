//Lista 6
//Questão 2

#include <stdio.h>

int A[7], B[7], C[7][2], i, j; 
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

    for(i=0; i<numero_de_colunas_de_C; ++i){
        for(j=0; j<numero_de_linhas_de_C; ++j){
            if(i==0){
                C[j][i] = A[j];
            }
            else{
                C[j][i] = B[j];
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