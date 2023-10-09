#include "BST.H"

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
	b1.deleteNode(70);
	b1.inorderTraversal();
	return 0;
}