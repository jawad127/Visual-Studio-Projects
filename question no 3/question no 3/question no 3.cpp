


#include "pch.h"
#include <iostream>
using namespace std;

template<class X>class test {
private :

	static int count;
	
public  :
	test() {

		count++;
	}
	X show();
};

template<class X>X test<X>::count = 0;
template<class X>X test<X>::show() {
	return (count);
}
	

int main()
{
	test<int> a, b;
	a.show();

};
