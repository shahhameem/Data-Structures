#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		left = right = nullptr;
	}
};

class BinarySearchTree{
	private:
		Node* root;
	public:
		BinarySearchTree() : root(nullptr) {}
		Node* insert(Node*, int);
		void inorder(Node*);
		Node* Delete(Node*, int);
		Node* findMin(Node*);
        Node* getRoot() {
            return root;
        }
		void deleteNode(int value) {
			root = Delete(root, value);
		}
		void insertNode(int value) {
			root = insert(root, value);
		}
		void inorderTraversal() {
			inorder(root);
		}
};

Node* BinarySearchTree::findMin(Node* ptr) {
	while(ptr->left != nullptr) 
		ptr = ptr->left;
	return ptr;
}

Node* BinarySearchTree::insert(Node* ptr, int value){
	if(ptr == nullptr)
		return new Node(value);
	else if(value < ptr->data)
		ptr->left = insert(ptr->left, value);
	else
		ptr->right = insert(ptr->right, value);
	return ptr;
}

void BinarySearchTree::inorder(Node* ptr) {
		if (ptr == nullptr) return;
		inorder(ptr->left);
		cout << ptr->data << "	";
		inorder(ptr->right);
}

Node* BinarySearchTree::Delete(Node* root, int value) {
	if(root == nullptr)
		return root;
	else if(value < root->data)
		root->left = Delete(root->left, value);
	else if(value > root->data)
		root->right = Delete(root->right, value);
	else {
		if(root->left == nullptr){
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right == nullptr) {
			Node* temp = root->left;
			delete root;
			return temp;
		}
		else {
			Node* temp = findMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}