#include <stdio.h>

int fatorial(int x) {
	// Caso-base
	if(x==1) return 1;
	// Caso Recursivo
	return x * fatorial(x-1);
}


int main() {
	int resutlado = fatorial(6);
	printf("%d\n\n", resutlado);
	system("PAUSE");
}
