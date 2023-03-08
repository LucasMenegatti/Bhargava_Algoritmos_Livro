#include <stdio.h>
#include <locale.h>

// Fa�a um programa que encontre o maior n�mero de uma lista, usando uma fon��o recursiva e pointers

int maiorDaLista(int *pLista, int n, int maior) { // *pLista aponta para o 1� elemento da lista ao qual ele aponta
	if(n<0) return maior; // Caso Base
	if(maior < *pLista) {
		maior = *pLista;
	}
	maiorDaLista(++pLista, --n, maior); // Incrementar o pLista, aumenta o index ao qual ele aponta

}


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	
	int lista[6] = {19, 136, 2, 55, 43, 21}; //Elementos da lista
	int tamanhoDaLista = sizeof(lista)/sizeof(lista[0]); // Retorna o tamanho da lista (Tamanho em bytes da lista dividido pelo tamanho em bytes de um de seus elementos)
	printf("Maior n�mero: %d\n\n", maiorDaLista(lista, tamanhoDaLista-1, lista[0]));
	
	
	system("PAUSE");
}
