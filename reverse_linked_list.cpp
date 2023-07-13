#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* link;
};

void print(Node* n) {
	while (n != NULL) {
		cout << n->data << "\t";
		n = n->link;
	}
}

Node* reverse(Node* &n) {
	Node* prev = NULL;
	Node* current = n;
	Node* next;
	while (current != NULL) {
		next = current->link;
		current->link = prev;

		prev = current;
		current = next;
	}
	return prev;
}

void insert(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->link = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->link != NULL) {
        current = current->link;
    }
    current->link = newNode;
	return;
}

int main() {
    Node* head = NULL;
    int value;
    char contd = 'y';
    while(1) {
    	cout << "Enter the value you want to insert in the linked list: \n";
        cin >>value;
        insert(&head, value);
        print(head);
		cout.flush();
        cout << "\nEnter y to add or other key to stop: \n";
        cin>>contd;
        if(contd != 'y') break;
	}
	cout << endl << "Before reversing" << endl;
	print(head);
	cout << endl <<"After reversing" << endl;
	head = reverse(head);
	print(head);
	//system("pause>0");
}