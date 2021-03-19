
//

#include "pch.h"
#include <iostream>
using namespace std;

template <class T>class sum {

private :
	T num1, num2;
public:
	sum(T n, T k) {
		num1 = n;
		num2 = k;

		
		 T summ();
	}
	T summ();
};

template <class T> 
T sum<T>::summ() {
	int n;
n= num1 + num2;
return (n);
}
int main()
{

	sum<int> a(3, 4);
	a.summ();
}

