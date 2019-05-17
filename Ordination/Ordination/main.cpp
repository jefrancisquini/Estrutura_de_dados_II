#include <iostream>
#include "Util.h"
#define MAX 10
using namespace std;

int main() {
	int vector[MAX] = { 5, 3, 8, 9, 2,1,7,10,4,6 };

/*Algoritimo BubbleSort*/
	cout <<"Tempo BubbleSort: "<< bubbleSort(vector, MAX)<<" s;"<< endl<<"Resultado: ";
	for (int i = 0; i < MAX; i++)
		cout << vector[i]<<",";
	cout << endl;
/*END*/
/*Algoritimo SelectionSort*/
	cout << "Tempo SelectionSort: " << selectionSort(vector, MAX) << " s;" << endl << "Resultado: ";
	for (int i = 0; i < MAX; i++)
		cout << vector[i] << ",";
	cout << endl;
/*END*/
/*Algoritimo InsertionSort*/
	cout << "Tempo InsertionSort: " << insertionSort(vector, MAX) << " s;" << endl << "Resultado: ";
	for (int i = 0; i < MAX; i++)
		cout << vector[i] << ",";
	cout << endl;
/*END*/
/*Algoritimo MergeSort*/
	cout << "Tempo MergeSort: " << mergeSort(vector,0, MAX-1) << " s;" << endl << "Resultado: ";
	for (int i = 0; i < MAX; i++)
		cout << vector[i] << ",";
	cout << endl;
/*END*/
	system("pause");
}