


#include "pch.h"
#include <iostream>
using namespace std;

class person  {
protected :
	int pname;

public:
	virtual void getdata() = 0;// pure virtual function
	void show() {
		cout << "good" << endl;
	}
};

class bowler : public person {
protected:

	int speed;
public:
	virtual void getdata() = 0;
	
};

class spinner : public bowler {
private:
	int g;
public:
	void getdata() {
		cout << "enter pname :";
		cin >> pname;
		cout << "enter speed ";
		cin >> speed;
	}

};




int main()
{
	
	person *ptr;
	spinner s;

	ptr = &s;
	ptr->getdata();
}


