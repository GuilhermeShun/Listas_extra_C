//Lista 6
//Questão 1

#include <stdio.h>

int A[5][3], B[5][3], C[5][3], i, j; 

void main(){
    for(i=0; i<(sizeof(A[0])/sizeof(A[0][0])); ++i){
        for(j=0; j<(sizeof(A)/sizeof(A[0])); ++j){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0; i<(sizeof(B[0])/sizeof(B[0][0])); ++i){
        for(j=0; j<(sizeof(B)/sizeof(B[0])); ++j){
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<(sizeof(C[0])/sizeof(C[0][0])); ++i){
        for(j=0; j<(sizeof(C)/sizeof(C[0])); ++j){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(i=0; i<(sizeof(A[0])/sizeof(A[0][0])); ++i){
        for(j=0; j<(sizeof(A)/sizeof(A[0])); ++j){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }    
}