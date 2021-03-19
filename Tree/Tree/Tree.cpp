

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int data;
	node *right;
	node *left;
};
class tree {
private:
	node *root;
public:
	tree() {
		root = NULL;
	}

	void del_ete(int data) {
		node *ptr = root;
		if (ptr == NULL) {
			cout << "tree is empty" << endl;
		}
		else if(data>)
	}

	void insert(int data) {
		node *ptr = new node;
		ptr->data = data;
		if (root == NULL) {
			root = ptr;
			root->left = root->right = NULL;
		}
		else {

			node *curr = root;

			while (curr != NULL) {
				if (data > curr->data) {
					if (curr->right == NULL) {
						curr->right = ptr;
						ptr->right = ptr->left = NULL;
						curr = ptr;
						cout << "data pushed*" << endl;

					}
					curr = curr->right;

				}
				else {
					if (data < curr->data) {
						if (curr->left == NULL) {
							curr->left = ptr;
							ptr->right = ptr->left = NULL;
							cout << "data pushed*" << endl;
							curr = ptr;

						}
						curr = curr->left;

					}
				}

			}


		}
	}

};

int main()
{
	tree t;
	t.insert(5);
	t.insert(6);
	t.insert(3);
	t.insert(2);
}

