

#include "pch.h"
#include <iostream>
using namespace std;

void insert(int x) {
	if (rear > front) {
		cout << "full" << endl;
	}
	else {
		rear = rear + 1 % n;
		arr[rear] = x;
	}
}
void delete() {
	if (front == -1 && rear == -1) {

	}
	else if (front == rear) { front = rear = -1; }
	else {
		front = front + 1 % n;
		
	}
}

int main()
{
    std::cout << "Hello World!\n"; 
}

