//Lista 4
//Questão 2

#include <stdio.h>
int A[6], B[6], i;

int fatorial(int numero) {
	int resultado = 1;
	int cont;
	for(cont=numero; cont>=1; --cont) {
		resultado = resultado*cont;
	    }
	return resultado;
}
int main() {
	for(i=0; i<6; ++i) {
		scanf("%d", &A[i]);
	}
	for(i=0; i<6; ++i) {
		B[i] = fatorial(A[i]);
	}

	for(i=0; i<6; ++i) {
		printf("%d ", B[i]);
	}
	return 0;

}