#include "Queue.h"
int main() {
	Queue<float, 10> Q1;
	int option, deqItem;
	float item;
	while(1){
	cout << "Enter the operation you want to perform.\n1.Enqueue\n2.Dequeue\n3.Check Empty\n4.Display\n5.Exit\n";
	cin >> option;
	switch(option) {
		case 1: 
		cout << "Enter element to insert = ";
		cin >> item;
		Q1.enqueue(item); 
		break;
		case 2: deqItem = Q1.dequeue(); if(deqItem == 0){cout << "Empty Queue" << endl;} else{ cout << deqItem <<" dequeued successfully." << endl;} break;
		case 3: cout <<(Q1.isempty() ? "Yes" : "No") << endl; break;
		case 4: Q1.display(); break;
		case 5: exit(0);
	}
}
	return 0;
}









