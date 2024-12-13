//Lista 6
//Questão 3

#include <stdio.h>

int A[10], B[10][3], i, j; 
int numero_de_elementos_de_A = sizeof(A)/sizeof(A[0]);
int numero_de_colunas_de_B = sizeof(B[0])/sizeof(B[0][0]);
int numero_de_linhas_de_B =sizeof(B)/sizeof(B[0]);

int fatorial(int numero) {
	int resultado = 1;
	int cont;
	for(cont=numero; cont>=1; --cont) {
		resultado = resultado*cont;
	    }
	return resultado;
}

void main(){
    
    for(i=0; i<numero_de_elementos_de_A; ++i){
        scanf("%d", &A[i]);
    }
    
    for(i=0; i<numero_de_linhas_de_B; ++i){
        for(j=0; j<numero_de_colunas_de_B; ++j){
            if(j==0){
                B[i][j] = A[i] + 5;
            }
            else if(j==1){
                B[i][j] = fatorial(A[i]);
            }
            else if(j==2){
                B[i][j] = A[i] * A[i];
            }
        }
    }
    
    for(i=0; i<numero_de_linhas_de_B; ++i){
        for(j=0; j<numero_de_colunas_de_B; ++j){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
   
}