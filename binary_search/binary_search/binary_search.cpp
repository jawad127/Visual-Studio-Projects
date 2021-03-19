

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a[5] = {1,2,3,4,5};
	int f = 0, l = 4;
	int i = 0;
	int x = 0;
	int mid = (f + l )/ 2;
	while (i <= 4) {
		
		mid = (f + l )/ 2;
		if (a[mid] < 5) {
			f = mid + 1;
		}
		else if (a[mid] > 5) {
			l = mid - 1;
		}
		else  {
			cout << "found" << endl;
		}
		i++;
		break;
		x++;
	}
	cout << x << endl;
}

