

#include "pch.h"
#include <iostream>
using namespace std;

class queue {
private:
	int C,size,arr[10],head, tail;
public: 
	queue() {
		C = 0;
		head = 0;
		tail = -1;
		size = 10;
	}
	void insert(int element) {
		if (!isfull()) {
			arr[++tail] = element;
			C++;
			
		}
		else {
			cout << "queue is full" << endl;
			
		}
	}
	int del_ete() {
		if (isempty()) {
			cout << "queue is empty" << endl;
			return NULL;
		}
		else {
			C--;
			return arr[head++];
			
		}
	}

	bool isfull() {
		if (C > size) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isempty() {
		if (C <= 0) {
			head = 0;
			tail = -1;
			cout << "queue is empty" << endl;
			return true;
			
		}
		else {
			return false;
		}


	}

};

int main()
{
	queue q1;
	q1.insert(1);
	q1.insert(5);
	q1.insert(2);
	q1.insert(4);
	q1.insert(3);
	cout << q1.del_ete() << endl;
	cout << q1.del_ete() << endl;
	cout << q1.del_ete() << endl;
	cout << q1.del_ete() << endl;
	cout << q1.del_ete() << endl;
	q1.insert(1);
	q1.insert(5);
	q1.insert(2);
	q1.insert(4);
	q1.insert(3);
   
}

