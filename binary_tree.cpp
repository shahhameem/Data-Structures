#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *left, *right;
	Node(){
		left = right = nullptr;
	}
};

class BinarySearchTree{
	private:
		Node* root;
	public:
		BinarySearchTree() : root(nullptr) {}
		Node* getRoot() {return root;}
		Node* insert(Node*, int);
		//void inorder();
};

Node* BinarySearchTree::insert(Node* ptr, int value){
	if(ptr == nullptr){
		Node* newnode = new Node;
		newnode->data = value;
		ptr = newnode;
		return ptr;
	}
	if(value < ptr->data){
		ptr->left = insert(ptr->left, value);
	}
	else {
		ptr->right = insert(ptr->right, value);
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	BinarySearchTree b1;
	for(int i = 10; i < 100; i+=10)
		b1.insert(b1.getRoot(), i);
	b1.
	return 0;
}