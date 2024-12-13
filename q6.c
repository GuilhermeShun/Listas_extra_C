//Lista 4
//Questão 6

#include <stdio.h>
float A[8], B[8];
int i;

int main() {
	for(i=0; i<8; ++i) {
		scanf("%f", &A[i]);
	}
	
	for(i=0; i<8; ++i) {
        B[i] = A[i]*A[i];
	}	
	for(i=0; i<8; ++i) {
	    printf("%f\n", B[i]);
	}
	return 0;

}