#include <iostream>

struct node {
    int info;
    node* next;
    node* prev;
    node(int val) : info(val), prev(nullptr), next(nullptr) {}
}*front, *rear;

bool isEmpty() {
    return rear == nullptr && front == nullptr;
}

void fpeek() {
    if(isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }
    std::cout << front->info << std::endl;
}

void rpeek() {
    if(isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }
    std::cout << rear->info << std::endl;
}

void enqueue(int value) {
    node* newnode = new node(value);
    if(isEmpty()) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
}

int dequeue() {
    if(isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
        return -1;
    }
    node* temp = rear;
    int Temp = temp->info;
    rear = rear->prev;
    delete temp;
    if(front = rear) {
        front = rear;
    }
    return Temp;
}

void print() {
    node* n = front;
    while (n != nullptr) {
        std::cout << n->info << "   ";
        n = n->next;
    }
    std::cout << std::endl;
}

void printRev() {
    node* n = rear;
    while (n != nullptr)
    {
        std::cout << dequeue() << "   ";
        n = n->prev;
    }
    std::cout << std::endl;
}

void create()
{
    int value;
    std::cout << "Enter the values of queue (-999 to stop) :";
    std::cin >> value;
    while(value != -999)
    {
        enqueue(value);
        std::cin >> value;
    }
}


int main()
{
    create();
    print();
    printRev();
    return 0;
}