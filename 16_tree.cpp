#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *right, *left;	
};
Node* create()
{
	Node* ptr = new Node;
	cout << "Enter data or -1 if no node :";
	int value{}; cin >> value;
	if(value == -1)
		return nullptr;
	ptr->data = value;
	cout << "Enter left child of " << value << endl;
	ptr->left = create();
	cout << "Enter right child of " << value<<endl;
	ptr->right = create();
	return ptr;
}
void preorder(Node* root)
{
	if(root == nullptr)
		return;
	cout << root->data << "	";
	preorder(root->left);
	preorder(root->right);
	return;
}

void inorder(Node* root)
{
	if(root == nullptr)
		return;
	inorder(root->left);
	cout << root->data << "	";
	inorder(root->right);
}

void postorder(Node* root)
{
	if(root == nullptr)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << "	";
	return;
}
	
int main()	
{
	Node* root = nullptr;
	root = create();
	//preorder(root);
	//inorder(root);
	postorder(root);
	return 0;
}






