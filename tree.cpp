#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int _data){
        data = _data;
        Node* left = NULL;
        Node* right = NULL;
    }
};

void preorder(Node* root){
    if(root -> left == NULL)
    {
        root = root -> right;
        if(root -> right == NULL)
        {
            root = 
        }
    }
     cout << root -> data;
     root = root -> left;
     cout << root -> data;
     root = root -> left;
}

/*                  10
                /           \
            5               20
        /       \        /      \
    0           1       15          25
*/
int main()
{
    Node* root = new Node(10);
    root -> left = new Node(5);
    root->right = new Node(20);
    root -> right ->  right = new Node(0);
    root -> right -> left = new Node(1);
    root -> left -> right = new Node(15);
    root -> right -> right = new Node(25);
    return 0;
}