

#include "pch.h"
#include <iostream>
using namespace std;
struct node {
	int data;
	node *link=NULL;
}*front=NULL,*rear=NULL;

void enqueue(int value) {
	node *new_node = new node;
	new_node->data = value;
	if (front == NULL) {
		front = new_node;
	}
	else {
		node *nodeptr = front;
		while (nodeptr->link != NULL) {
			nodeptr = nodeptr->link;
		}
		nodeptr->link = new_node;
		rear = new_node;
		rear->link = NULL;

	}
}

void alter() {
	node *nodeptr = front;
	node *changer = front;
	int i = -1;
	while (nodeptr != NULL) {
		i++;
		if (i % 2 == 0 && i!=0) {
			
			changer->link = nodeptr;
			changer = changer->link;
			rear = changer;
		}
		nodeptr = nodeptr->link;
	}
}
void display() {
	node *nodeptr = front;
	while (nodeptr != NULL) {
		cout << nodeptr->data << " ";
		nodeptr = nodeptr->link;
	}

}

void dequeue() {
	node *nodeptr = front;
	front = front->link;
	delete nodeptr;
}
void delete_queue(int value) {
	
	
	if (front->data == value) {
		node *temp = front;
		front = front->link;

		delete temp;
	}
	else {
		node *nodeptr=front->link;
		node *prev = front;
		while (nodeptr != NULL) {
			if (nodeptr->data == value) {
				
				prev->link = nodeptr->link;
				delete nodeptr;
			}
			prev = nodeptr;
			nodeptr = nodeptr->link;
		}

	}
}

int main()
{
	enqueue(0);
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	enqueue(7);
	enqueue(8);
	enqueue(9);
	enqueue(10);
	display();
	alter();
	cout << endl;
	cout << "after alter : ";
	display();
    
}

