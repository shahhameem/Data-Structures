#include <iostream>
#include "Queue"
using namespace std;

class Node{
public:
	int data;
	Node *left, *right;
	Node(){
		left = right = nullptr;
	}
};

class BinaryTree{
	private:
		Node* root;
	public:
		BinaryTree() : root(nullptr) {}
		Node* make();
		Node* getRoot() {return root;}
		Node* del(Node*, int);
		Node* insert(Node*, int);
		void inorder(Node*);
		void preorder(Node*);
		void postorder(Node*);
		void bfs(Node*);
			void create() {
			root = make();
		}
		void Insert() {
			cout << "Enter the item to insert: ";
			int item{};
			cin >> item;
			insert(root, item);
		}
		void traverse() {
			int flag;
			cout << "Enter the option\n1.Inorder\n2.Preorder\n3.Postorder\n4.BFS\n";
			cin >> flag;
			switch (flag)
			{
			case 1:
				inorder(root);
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				postorder(root);
				break;
			case 4:
				bfs(root);
				break;											
			default:
				return;
				break;
			}
			cout << "\n";
		}
		void Delete() {
			cout << "Enter the value of node to delete: ";
			int value{};
			cin >> value;
			root = del(root, value);
		}
};

Node* BinaryTree::make()
{
	Node* ptr = new Node;
	cout << "Enter data or -1 if no node :";
	int value{}; cin >> value;
	if(value == -1)
		return nullptr;
	ptr->data = value;
	cout << "Enter left child of " << value << endl;
	ptr->left = make();
	cout << "Enter right child of " << value<<endl;
	ptr->right = make();
	return ptr;
}

void BinaryTree::preorder(Node* root)
{
	if(root == nullptr)
		return;
	cout << root->data << "	";
	preorder(root->left);
	preorder(root->right);
}

void BinaryTree::inorder(Node* root)
{
	if(root == nullptr)
		return;
	inorder(root->left);
	cout << root->data << "	";
	inorder(root->right);
}

void BinaryTree::postorder(Node* root)
{
	if(root == nullptr)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << "	";
}

void BinaryTree::bfs(Node* root) {
	cout << "Under construction.";
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
	BinaryTree b;
	int option;
	while(1){
	cout << "Enter the operation you want to perform.\n1.Create\n2.Traverse\n3.Search\n5.Exit\n";
	cin >> option;
	switch(option) {
		case 1: 
			b.create();
		break;
		case 2: 
			b.traverse();
		break;
		default: 
			return 0;
	}
}
}