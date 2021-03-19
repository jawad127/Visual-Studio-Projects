

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int a[5] = {4,0,6,5,1};
	int i=0;
	while (i < 5) {
		int j = 0;
		while (j < 5) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}

			j++;
		}
		i++;
	}

	i = 0;
	while (i < 5) {
		cout << a[i];
		i++;
	}
}


