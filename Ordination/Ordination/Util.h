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
float bubbleSort(int *vet, int size)
{
	clock_t time;
	time = clock();
	bool swapped;
	for (int i = 0; i < size - 1; i++) {
		swapped = false;
		for (int j = 0 ; j < size - 1; j++) {
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
/*
Função: Ordenar um vetor de inteiros com o algoritimo selectionSort
*/
float selectionSort(int *vet, int size)
{
	clock_t time;
	time = clock();

	int smaller;
	for (int i = 0; i < size - 1; i++) {
		smaller = i;
		for (int j = i+1; j < size; j++) {
			if (vet[j] < vet[smaller]) {
				smaller = j;
			}
		}
		if (vet[i] != vet[smaller]) {
			swap(vet, i, smaller);
		}			
	}

	return time / (double)CLOCKS_PER_SEC;
}
/*
Função: Ordenar um vetor de inteiros com o algoritimo insertionSort
*/
float insertionSort(int *vet, int size)
{
	clock_t time;
	time = clock();

	int pivot,j;
	for (int i = 1; i < size; i++) {
		pivot = vet[i];
		j = i - 1;
		while (j >= 0 && vet[j] > pivot) {
			vet[j + 1] = vet[j];
			j = j - 1;
		}
		vet[j + 1] = pivot;
	}

	return time / (double)CLOCKS_PER_SEC;
}
/*
Função: Ordenar um vetor de inteiros com o algoritimo mergeSort
*/
void merge(int vetor[], int comeco, int meio, int fim) {
	int com1 = comeco, com2 = meio + 1, comAux = 0, tam = fim - comeco + 1;
	int *vetAux;
	vetAux = (int*)malloc(tam * sizeof(int));

	while (com1 <= meio && com2 <= fim) {
		if (vetor[com1] < vetor[com2]) {
			vetAux[comAux] = vetor[com1];
			com1++;
		}
		else {
			vetAux[comAux] = vetor[com2];
			com2++;
		}
		comAux++;
	}

	while (com1 <= meio) {  //Caso ainda haja elementos na primeira metade
		vetAux[comAux] = vetor[com1];
		comAux++;
		com1++;
	}

	while (com2 <= fim) {   //Caso ainda haja elementos na segunda metade
		vetAux[comAux] = vetor[com2];
		comAux++;
		com2++;
	}

	for (comAux = comeco; comAux <= fim; comAux++) {    //Move os elementos de volta para o vetor original
		vetor[comAux] = vetAux[comAux - comeco];
	}

	free(vetAux);
}
float mergeSort(int *vet, int start,int end)
{
	clock_t time;
	time = clock();

	int medium;
	if (start < end) {
		medium = (start + end) / 2;
		mergeSort(vet, start, medium);
		mergeSort(vet, medium+1, end);
		merge(vet, start, medium, end);
	}

	return time / (double)CLOCKS_PER_SEC;
}






#endif