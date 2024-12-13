//Lista 4
//Questão 5

#include <stdio.h>
float A[20], B[30], C[50];
int i;

int main() {
	for(i=0; i<20; ++i) {
		scanf("%f", &A[i]);
	}
	for(i=0; i<30; ++i) {
		scanf("%f", &B[i]);
	}
	
	for(i=0; i<50; ++i) {
		if(i<20) {
		    C[i] = A[i];
		}
		else { 
		    C[i] = B[i - 20];
		}
	}	
	for(i=0; i<50; ++i) {
	    printf("%f ", C[i]);
	}
	return 0;

}