#include <iostream>
//Blueprint of node having two parts data and link part
class Node {
	public :
		int data;
		Node* link;
};
//Function to read the linked list
int print(Node* n) {
	while(n != NULL) {
	 std::cout<<n->data<<std::endl;
	 n = n->link;
	}
	return 0;
}
//Function to insert an element at the beginnig of the linked list
int insertFirst(Node**n, int value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->link = *n;
	*n = newNode;
	return 0;
}
//Creating nodes in main function
int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->data = 10;
	head->link = second;
	second->data = 20;
	second->link = third;
	third->data = 30;
	third->link = NULL;
	insertFirst(&head,5);
	print(head);
}
