#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class BST
{
private:
    Node* root;

    Node* insertRecursive(Node* root, int value)
    {
        if (root == nullptr)
        {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->left = newNode->right = nullptr;
            return newNode;
        }

        if (value < root->data)
            root->left = insertRecursive(root->left, value);
        else if (value > root->data)
            root->right = insertRecursive(root->right, value);

        return root;
    }

    bool searchRecursive(Node* root, int key)
    {
        if (root == nullptr)
            return false;

        if (root->data == key)
            return true;
        else if (key < root->data)
            return searchRecursive(root->left, key);
        else
            return searchRecursive(root->right, key);
    }
    
    void inorderTraversalRecursive(Node* root)
    {
    	if(root == nullptr)
    		return;
    	inorderTraversalRecursive(root->left);
    	cout << root->data << "	";
    	inorderTraversalRecursive(root->right);
	}

public:
    BST()
    {
        root = nullptr;
    }

    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    bool search(int key)
    {
        return searchRecursive(root, key);
    }

    void inorderTraversal()
    {
        inorderTraversalRecursive(root);
    }
};

int main()
{
    BST bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    cout << "In-order Traversal of the BST: ";
    bst.inorderTraversal();
    cout << endl;

    int key = 40;
    cout << "Search for " << key << ": " << (bst.search(key) ? "Found" : "Not Found") << endl;

    key = 90;
    cout << "Search for " << key << ": " << (bst.search(key) ? "Found" : "Not Found") << endl;

    return 0;
}
