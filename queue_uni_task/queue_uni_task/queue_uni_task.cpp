

#include "pch.h"
#include <iostream>
using namespace std;

int new_line[5],or_line[5];
int front = 0, rear = -1;
 
void enque(int  value) {
	if (rear >= 5 - 1) {
		cout << "queue is over flowed" << endl;
	}
	else {
		or_line[++rear] = value;
	}
}

void deque() {
	if (front >= 5 - 1) {
		cout << "queue is empty" << endl;
	}
	else {
		++front;
	}
}

void display() {
	int i = 0;
	while (i <= 5-1) {
		cout << or_line[i];
		i++;
	}
}
void line_changer() {
	front = 0;
	rear = -1;
	int i = 0,c=-1;
	while (i <= 5 - 1) {
		if (i % 2 == 0) {

			new_line[++rear] = or_line[i];
			c++;
		}
		i++;
	}
	i = 0;
	while (i <= c) {
		cout << new_line[i] << endl;
		i++;
	}

}



int main()
{
	int i = 0,input=1;
	while (i <= 5 - 1) {
		enque(input);
		input += 2;
		i++;
	}
	display();
	line_changer();
}

