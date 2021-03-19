

#include "pch.h"
#include <iostream>
using namespace std;

class db_ended {
private:
	int front, rear;
	int arr[5];
public:
	db_ended() {
		front = rear = -1;
	}
	void insert_front(int v) {
		if (front == 0 && rear == 4) {
			cout << "full" << endl;
		}
		else if (front > 0) {
			arr[--front] == v;
		}
		else {
			cout << "there is no space in front" << endl;
		}
	}
	void insert_rear(int v) {
		if (front == 0 && rear == 4) {
			cout << "full" << endl;
		}
		else if (rear < 4) {
			rear++;
			arr[rear] = v;
		}
		else {
			cout << "there is no space in rear side" << endl;
		}
	}

	void del_front() {
		if (front == -1 && rear == -1) {
			cout << "empty" << endl;
		}
		//last element
		else if (front == rear) {
				front = rear = -1;
			}
			
		else {
			front++;
			
		}
	}
	void del_back() {

		if (front == -1 && rear == -1) {
			cout << "empty" << endl;
		}

		//last element
		else if (front == rear) {
			front = rear = -1;
		}

		else {
			rear--;

		}
	}
};

int main()
{
	
}

