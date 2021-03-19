

#include "pch.h"
#include <iostream>
using namespace std;


struct queue {
	
	int Front;
	int Rear;
	int arr[5];	
};



bool isempty(queue &q) {
	if (q.Rear == -1 && q.Front == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isfull(queue &q) {
	if (q.Rear == 5 - 1) {
		return true;
	}
	else {
		return false;
	}
}
void Enqueue(queue &q,int value) {
	if (isfull(q)) {
		cout << "Queue is Full" << endl;
	}
	else {
		q.arr[++q.Rear] = value;
	}
}

int Dequeue(queue &q) {
	// Last element in queue
	if (q.Rear==q.Front) {

		int store = q.arr[q.Rear];
		q.Rear = q.Front = -1;
		return store;
	}
	else if (!isempty(q)) {
		q.Front++;
		return 0;
	}
	else {
		cout << "queue is empty" << endl;
		return 0;
	}
}

void display(queue &q) {
	int i = q.Front;
	while (i <= q.Rear) {
		cout << q.arr[i];
		i++;
	}
}
int main()
{
	queue q;
	q.Front = q.Rear = -1;
	Enqueue(q,5);
     
}


