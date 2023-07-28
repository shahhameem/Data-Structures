#include <iostream>
using namespace std;

#define N 10

class cirqueue {
    int cq[N], front, rear;

public:
    cirqueue() {
        front = -1;
        rear = -1;
    }

    void enqueue();
    int dequeue();
    void isempty();
    void display();
    void frontpeek();
    void rearpeek();
};

void cirqueue::enqueue() {
    if ((rear + 1) % N == front) {
        cout << "Overflow" << endl;
        return;
    }

    int item;
    cout << "Enter the element: ";
    cin >> item;

    if (rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % N;
    }

    cq[rear] = item;
    cout << "Enqueued successfully." << endl;
}

void cirqueue::display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }

    int i = front;
    cout << "Elements in the circular queue are: ";
    while (i != rear) {
        cout << cq[i] << " ";
        i = (i + 1) % N;
    }
    cout << cq[i] << endl;
}

int cirqueue::dequeue() {
	if(front == -1 || front % N == (rear + 1) % N) {
		cout << "Underflow" << endl;
	} int item = cq[front];
		front++;
		return item;
}

// Define the remaining member functions (dequeue, isempty, frontpeek, rearpeek) here

int main() {
    cirqueue q;
    q.enqueue();
    q.display();
	q.dequeue();
	q.display();
    return 0;
}

