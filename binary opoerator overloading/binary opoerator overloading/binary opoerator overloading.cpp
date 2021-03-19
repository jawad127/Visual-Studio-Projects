


#include "pch.h"
#include <iostream>
using namespace std;

class sum {

private:
	float var=5;

public:
	
	sum operator+(sum p){
		sum temp;
		temp.var = p.var + var;
		return (temp);
	}

	sum operator*(sum p) {
		sum temp;
		temp.var = p.var * var;
		return (temp);
	}
	sum operator --() {
		sum temp;
		temp.var = var - 1;
		return (temp);
	}
	sum operator --(int) {
		sum temp;
		temp.var = var - 1;
		return (temp);
	}
	void show();
};

void sum::show() {
	cout << var;
}
int main()
{
	sum s1, s2, s3, s4;

	s3 = s1 +--s2*s4--;
	
	s3.show();
}

