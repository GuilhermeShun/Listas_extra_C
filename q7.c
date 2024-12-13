//Lista 4
//Questão 7

#include <stdio.h>
float A[10], B[10];
int i;

int main() {
	for(i=0; i<10; ++i) {
		scanf("%f", &A[i]);
	}
	
	for(i=0; i<10; ++i) {
        B[i] = A[9 - i];
	}	
	for(i=0; i<10; ++i) {
	    printf("%f\n", B[i]);
	}
	return 0;

}