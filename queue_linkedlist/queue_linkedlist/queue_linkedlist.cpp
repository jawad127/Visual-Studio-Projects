

#include "pch.h"
#include <iostream>
using namespace std;

class queue {
	struct node {
		int data;
		node *next;
	};
	node *front, *rear;

public :
	queue() {
		front = rear = NULL;
	}
	void enqueue(int data) {
		node *ptr = new node;
		ptr->data = data;

		if (front == NULL) {
			front = rear = ptr;
		}
		else {
			rear->next = ptr;
			rear = ptr;
			rear->next = NULL;
		}

	}
	int dequeue() {

		
		
				node *temp = front;
				int data = temp->data;
				front = front->next;
				delete temp;
				if (front == NULL) {
					rear = NULL;
				}
				return data;
			
		
	}

	~queue() {
		node *ptr = front;
		while (ptr != NULL) {
			node *temp = ptr;
			ptr = ptr->next;
			delete temp;
		}
	}
};
int main()
{
	queue q;
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.dequeue();
	q.dequeue();
	q.dequeue();
}

