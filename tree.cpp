#include <iostream>
#include <fstream> 
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node* create()
{
	Node* newnode = new Node;
	//cout << "Enter the value (-1 if no node) :";
	int value{}; cin >> value;
	if(value == -1)
		return nullptr;
	newnode->data = value;
	//cout << "For left node of " << value << endl;
	newnode->left = create();
	//cout << "For right node of " << value << endl;
	newnode->right = create();
	return newnode;
}
void postorder(Node* root)
{
	if(root == nullptr)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << "	";
}

void preorder(Node* root)
{
	if(root == nullptr)
		return;
	cout << root->data << "	";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root)
{
	if(root == nullptr)
		return;
	inorder(root->left);
	cout << root->data << "	";
	inorder(root->right);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	Node* root = nullptr;
	root = create();
	inorder(root);
	return 0;
}