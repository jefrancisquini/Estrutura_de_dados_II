#include <ctime>
#include <iostream>
#ifndef Util_H 
#define Util_H

/*
Função: Fazer troca de dois valores inteiros
*/
void swap(int *vet, int a,int b) {
	int aux = vet[a];
	vet[a] = vet[b];
	vet[b] = aux;
}

/*
Função: Ordenar um vetor de inteiros com o algoritimo bubblesort
*/
float bubbleSort(int *vet, int tamanho)
{
	clock_t time;
	time = clock();
	bool swapped;
	for (int i = 0; i < tamanho - 1; i++) {
		swapped = false;
		for (int j = 0 ; j < tamanho - 1; j++) {
			if (vet[j] > vet[j + 1]) {
				swap(vet,j,j+1);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}

	return time / (double)CLOCKS_PER_SEC;
}
#endif