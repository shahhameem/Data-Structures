#include <iostream>
#include <cstdlib>
using namespace std;
#define N 9
template <class T>
class queue{
	int front, rear;
	T q[N];
	public :
	queue() {front = 0;rear = -1;}
	void enqueue() {
		if(rear > N) {
			cout << "Overflow" << endl;
			return;
		}
		if(rear == -1) {rear = 0;}
		T item;
		cout << "Enter element to insert = ";
		cin >> item;
		q[rear] = item;
		rear++;
		return;
	}
	T dequeue() {
		if(isempty()) {
			cout << "Underflow" << endl;
			return 0;
		} T item = q[front];
		front++;
		return item;
	}
	void display() {
		for(int i = front; i < rear; i++) {
			cout << q[i] << "\t";
		} cout << "\n";
		return;
	}
	bool isempty() {
		return rear == -1 || front == rear;
	}
	~queue() {cout << "Queue Destroyed!" << endl;}
};
int main() {
	queue<float> Q1;
	int option, deqItem;
	while(1){
	cout << "Enter the operation you want to perform.\n1.Enqueue\n2.Dequeue\n3.Check Empty\n4.Display\n5.Exit\n";
	cin >> option;
	switch(option) {
		case 1: Q1.enqueue(); break;
		case 2: deqItem = Q1.dequeue(); if(deqItem == 0){cout << "Empty Queue" << endl;} else{ cout << deqItem <<" dequeued successfully." << endl;} break;
		case 3: cout <<(Q1.isempty() ? "Yes" : "No") << endl; break;
		case 4: Q1.display(); break;
		case 5: exit(0);
	}
}
	return 0;
}









