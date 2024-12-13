//Lista 4
//Questão 3

#include <stdio.h>
float A[5], B[5], C[5];
int i;

int main() {
	for(i=0; i<5; ++i) {
		scanf("%f", &A[i]);
	}
	for(i=0; i<5; ++i) {
		scanf("%f", &B[i]);
	}
	
	for(i=0; i<5; ++i) {
		C[i] = A[i] - B[i];

	}	
	for(i=0; i<5; ++i) {
	    printf("%f ", C[i]);
	}
	return 0;

}