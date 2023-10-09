#include <iostream>
using namespace std;
template <typename T, int N>
class Queue{
	int front, rear;
	T q[N];
	public :
	Queue() {front = 0;rear = -1;}
	void enqueue(T item) {
		if(rear > N) {
			cout << "Overflow" << endl;
			return;
		}
		if(rear == -1) {rear = 0;}
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
	~Queue() {}
};