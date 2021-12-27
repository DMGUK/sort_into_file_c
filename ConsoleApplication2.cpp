// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <fstream>
#define SIZE 100

using namespace std;

int arr[SIZE];

void generate() {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
	}
}

int main() {

	ofstream out ("file.txt");
	int temp, start = 0, min_pos, min_elem;
	generate();
	while (start != SIZE - 1)
	{
		min_elem = arr[start];
		min_pos = start;
		for (int i = start; i < SIZE; i++)
		{
			if (arr[i] > min_elem) {
				min_elem = arr[i];
				min_pos = i;
			}
		}      
		if (min_pos != start)
		{
			temp = arr[start];
			arr[start] = arr[min_pos];
			arr[min_pos] = temp;
		}
		start++;
	}
	out << "Sorted array : " << endl;
	for (int i = 0; i < 25; i++) {
		out << arr[i] << " ";
	}
	out << endl;
	for (int i = 25; i < 50; i++) {
		out << arr[i] << " ";
	}
	out << endl;
	for (int i = 50; i < 75; i++) {
		out << arr[i] << " ";
	}
	out << endl;
	for (int i = 75; i < SIZE; i++) {
		out << arr[i] << " ";
	}
	system("pause");
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
