//Lista 4
//Questão 1

#include <stdio.h>

int main(){
    //O vetor A será o inicial e o B receberá os valores de A adulterados
    float A[5], B[5];
    
    int i;
    
    //Atribuição dos valores de A via teclado
    printf("Insira os 5 valores: \n");
    for(i=0; i<5; ++i){
        scanf("%f", &A[i]);
    }
    
    //Atribuição dos valores de B, por meio de operações com os de A
    for(i=0; i<5; ++i){
        B[i] = A[i] * 3;    
    }
        
    //Exibição dos valores de B
    printf("Valores atualizados: \n");
    for(i=0; i<5; ++i){
        printf("%f\n", B[i]);
    }
    
    return 0;
}