#include <stdio.h>
#include <locale.h>

// Faça a soma dos itens de uma lista usando uma função recursiva

int soma(int lista[], int tamanhoDaLista) {
	if(tamanhoDaLista == 0) return 0; // Caso Base
	return soma(lista, tamanhoDaLista -1) + lista[tamanhoDaLista - 1]; // Caso Recursivo
}


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	
	int lista[6] = {1, 2, 2, 5, 10, 15};
	int tamanhoDaLista = sizeof(lista)/sizeof(lista[0]); // Retorna o tamanho da lista (Tamanho em bytes da lista dividido pelo tamanho em bytes de um de seus elementos)
	printf("Soma: %d\n\n", soma(lista, tamanhoDaLista));
	
	
	system("PAUSE");
}
