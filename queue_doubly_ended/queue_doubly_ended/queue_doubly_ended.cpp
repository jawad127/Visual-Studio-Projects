

#include "pch.h"
#include <iostream>
using namespace std;

struct deque {
	int arr[5];
	int front, rear;
};

void enqueue_front(deque &q, int v) {
	if ((q.front == 0 && q.rear == 5 - 1) || (q.front == q.rear + 1)) { // there  could only be two conditions for queue to be fuel
		cout << "queue is full" << endl;
	}
	else if (q.front == -1 && q.rear == -1) { //for the first insertion with enqueue_front
		q.front = q.rear = 0;
		q.arr[q.front]=v;
	}
	else if (q.front == 0) { // to take front to the last index
		q.front = 5 - 1;
	}
	else {
		q.arr[--q.front] = v; //else part is same as the rear++ in the linear queue .the only difference  is  , this time we are moving the front 
		                      // backward 
	}
}
void enqueue_rear(deque &q, int v) {
	if ((q.front == 0 && q.rear == 5 - 1) || (q.front == q.rear + 1)) { // there  could only be two conditions for queue to be fuel
		cout << "queue is full" << endl;
	}
	else if (q.front == -1 && q.rear == -1) { //for the first insertion with enqueue_front
		q.front = q.rear = 0;
		q.arr[q.front] = v;
	}
	else if (q.rear == 5 - 1) {// to take rear back to zeroth index from the last index
		q.rear == 0;
		q.arr[q.rear] = v;
	}
	else  
		{
		q.arr[++q.rear] = v;
	}
}

	void dequeue_front(deque &q) {
		if (q.rear == -1 & q.front == -1) { // to check if queue is empty or not
			cout << "queue is empty" << endl;
		}
		else if (q.front == q.rear) { //to detect the last element
			q.rear = q.front = -1;
		}
		else if (q.front == 5 - 1) {
			q.front = 0;
		}
		else {
			q.front++;
		}
	}

	void dequeue_rear(deque &q) {
		if (q.rear == -1 & q.front == -1) { // to check if queue is empty or not
			cout << "queue is empty" << endl;
		}
		else if (q.front == q.rear) { //to detect the last element
			q.rear = q.front = -1;
		}
		else if (q.front == 0) { 
			q.front = 5-1;
		}
		else {
			q.rear--;
		}
	}

	void display(deque &q) {
		int i = q.front;  
		while (i != q.rear) {
			cout << q.arr[i]; // loop will break before getting to the last 
			                 //element so , for that reason we have used the  print statement  after the loop even
			i++;
		} 
		cout << q.arr[i];

		
	}




int main()
{
	deque q;
	q.front = q.rear = -1;
	enqueue_front(q,5);
	display(q);
	enqueue_rear(q, 5);


     
}


