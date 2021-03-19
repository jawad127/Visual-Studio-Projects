


#include "pch.h"
#include <iostream>

using namespace std;

class sum {

private :

	static int a;

public :
	sum() {

		a++;
	}
	
	void show() {
		cout << "a = " << a << endl;
	
	}
	sum operator ++() {
		sum temp;

		temp.a = ++a  ;
		

		return temp;
	}
	sum operator ++(int) {
		sum temp;

		temp.a = a++;


		return temp;
	}
};

int sum::a = 0;

int main()
{
	sum s1,s3;

	s1.show();
	
	s3 = s1++;
	s3.show();
	s3 = ++s1;
	s3.show();

	
}


