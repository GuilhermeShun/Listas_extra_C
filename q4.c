//Lista 4
//Questão 4

#include <stdio.h>
float A[5], B[5], C[10];
int i;

int main() {
	for(i=0; i<5; ++i) {
		scanf("%f", &A[i]);
	}
	for(i=0; i<5; ++i) {
		scanf("%f", &B[i]);
	}
	
	for(i=0; i<10; ++i) {
		if(i<5) {
		    C[i] = A[i];
		}
		else { 
		    C[i] = B[i - 5];
		}
	}	
	for(i=0; i<10; ++i) {
	    printf("%f ", C[i]);
	}
	return 0;

}