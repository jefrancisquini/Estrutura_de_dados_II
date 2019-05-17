#include <iostream>
#include "Util.h"
#define MAX 5
using namespace std;

int main() {
	int vector[MAX] = { 5, 3, 8, 9, 2 };
/*Algoritimo BubbleSort*/
	cout <<"Tempo BubbleSort: "<< bubbleSort(vector, MAX)<<" s;"<< endl<<"Resultado: ";
	for (int i = 0; i < 5; i++)
		cout << vector[i]<<",";
	cout << endl;
/*END*/
/*Algoritimo BubbleSort*/
	cout << "Tempo SelectionSort: " << bubbleSort(vector, MAX) << " s;" << endl << "Resultado: ";
	for (int i = 0; i < 5; i++)
		cout << vector[i] << ",";
	cout << endl;
/*END*/
	system("pause");
}