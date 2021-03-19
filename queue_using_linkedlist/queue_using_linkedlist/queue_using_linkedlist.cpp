

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
	node() {
		next = NULL;
	}
};
class circular_queue {
private :
	node *front, *rear;

public:
	circular_queue() {
		front = rear = NULL;
	}
	void enqueue(int value) {
		node *ptr = new node;
		ptr->data = value;
		
		if (front == NULL) {
			front = rear = ptr;
		}
		else {
			rear->next = ptr;
			rear = ptr;
			rear->next = front;
		}
	}

	int dequeue() {
		if (front == NULL) {
			cout << "queue is empty" << endl;
			return 0;
		}
		else {
			int data = front->data;
			node *temp = front;
			front = front->next;
			delete temp;
			return data;
		}
	}

	void display() {
		node *i = front;
		do {
			cout << i->data << endl;
			i = i->next;
		} while (i!= front);
	}
};

int main()
{
	circular_queue c;
	c.enqueue(5);
	c.enqueue(6);
	
	c.display();
     
}

