

#include "pch.h"
#include <iostream>
using namespace std;


int arr[5];
int front=-1;
int rear=-1;
int s=5 ;

void enqueue(int value);

bool isempty() {
	if (front == -1 && rear == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isfull() {
	if (((rear + 1) % s) == front) {
		return true;
	}
	else {
		return false;
	}
}
void enqueue(int value) {
	if (front == -1 && rear == -1) {
		front = rear = 0;
		arr[rear] = value;
		cout << "successfully inserted*" << endl;
	}
	else if (isfull()) {
		cout << "queue is full" << endl;
	}
	else {

		rear = ((rear + 1) % s);
		arr[rear] = value;
		cout << "successfully inserted*" << endl;
	}
}

void dequeue() {
	if (!isempty()) {


		if (front == rear) {
			arr[front] = NULL;
			front = rear = -1;

		}
		else {

			arr[front] = NULL;
			front = (front + 1) % s;
		}

	}
	else {
		cout << "queue is empty" << endl;
	}
}

void display() {
	int i = front;
	while (i != rear) {
		
		cout << arr[i];
		i = (i + 1) % s;
	}
	cout << arr[i];
}


int main()
{
	int option;
	do {
		cout << "\n\tpress 0 to exit" ;
		cout << "\n\tpress 1 to enqueue";
		cout << "\n\tpress 2 to dequeue";
		cout << "\n\tpress 3 to display";
		cin >> option;

		switch (option) {
		case 1 :
			int input;
			cout << "\n\tpress the input";
			cin >> input;
			enqueue(input);
			
			break;

		case 2:
			if (!isempty()) {
				dequeue();
			}
			else if (isempty()) {
				cout << "queue is empty" << endl;
			}
			break;

		case 3 :
			if (!isempty()) {
				display();
			}
			else {
				cout << "queue is empty" << endl;
			}
		}

		

	} while (option != 0);
}

