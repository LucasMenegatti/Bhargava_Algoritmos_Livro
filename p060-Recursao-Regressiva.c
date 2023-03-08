#include <stdio.h>

int regressiva(int i) {
	printf("%d\n", i);
	// Caso-base
	if(i<=1) return;
	// Caso Recursivo
	regressiva(i-1);
}


int main() {
	regressiva(8);
}
