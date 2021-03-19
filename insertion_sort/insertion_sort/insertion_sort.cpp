// insertion_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int insertion_sort(int a[], int size) {
	int temp = 0, i = 1,j=0;
	while (i < size) {
		temp = a[i];
		j = i - 1;
		while ( j >= 0 && a[j] > temp ) {
  			
			a[j + 1] = a[j];
			a[j] = temp;
			j--;
		}
		i++;
	}

	i = 0;
	while (i < size) {
		cout << a[i];
		i++;
	}
	return 0;
}

int main()
{
	int size = 5;
	int a[5] = { 90,23,100,1,101 };
	int i = 1, j = 0, temp = 0;
	while (i < 5) {
		temp = a[i];
		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			a[j] = temp;
			j--;
		}
	}
}

