#include "BST.H"
#include "Queue.h"

void visit(Node* node) {
	cout << node->data << "	";
}

void bfs(BinarySearchTree& obj) {
	Queue<Node*, 10> queue;
	Node* p = obj.getRoot();
	if(p != 0) {
		queue.enqueue(p);
		while(!queue.isempty()) {
			p = queue.dequeue();
			visit(p);
			if (p->left != 0) 
				queue.enqueue(p->left);
			if (p->right != 0)
				queue.enqueue(p->right);
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	BinarySearchTree b1;
	int val;
	while(1) {
		cin >> val;
		if (val == -1)
			break;
		b1.insertNode(val);
	}
	//b1.inorderTraversal();
    bfs(b1);
	return 0;
}