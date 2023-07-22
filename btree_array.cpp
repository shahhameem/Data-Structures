#include <iostream>
#include <vector>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTreeArray {
private:
    std::vector<int> treeArray;

public:
    BinaryTreeArray() {}

    // Function to insert elements into the binary tree array
    void insert(int value) {
        treeArray.push_back(value);
    }

    // Function to construct the binary tree from the array representation
    TreeNode* constructTreeFromArray(int index = 0) {
        if (index >= treeArray.size() || treeArray[index] == -1) {
            return nullptr;
        }

        TreeNode* newNode = new TreeNode(treeArray[index]);
        newNode->left = constructTreeFromArray(2 * index + 1);
        newNode->right = constructTreeFromArray(2 * index + 2);

        return newNode;
    }
};

int main() {
    BinaryTreeArray bt;

    // Insert elements into the binary tree array
    bt.insert(1);
    bt.insert(2);
    bt.insert(3);
    bt.insert(-1);
    bt.insert(-1);
    bt.insert(4);
    bt.insert(5);

    // Construct the binary tree from the array representation
    TreeNode* root = bt.constructTreeFromArray();

    // Displaying the binary tree (inorder traversal)
    std::cout << "Inorder Traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
