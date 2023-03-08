#include <stdio.h>
#include <locale.h>

// Imaginando que você tenha um terreno que mede X por Y e você queira dividir esse terreno em partes quadradas iguais.
// Qual o maior tamanho possível de cada uma das partes quadradas?

int ea(int x, int y) {
	if(x==0) return y;
	if(y==0) return x;
	if(x>y) {
		return ea(x%y, y);
	} else {
		return ea(x, y%x);
	}
}


int main() {
	setlocale(LC_ALL,"Portuguese");
	//int resultado = ea(1680, 640);
	int resultado = ea(600, 600);
	printf("O menor quadrado deste terreno é %d x %d\n\n", resultado, resultado);
	system("PAUSE");
}
