#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
    node(int val, node* ptr = nullptr):info(val), next(ptr){}
};

class CQ {
    private :
        node *front, *rear;
    public:
        CQ():front(nullptr), rear(nullptr){}
        void enqueue();
        void dequeue();
        void traverse();
        bool isEmpty() {
            return front == nullptr;
        }
};

void CQ::enqueue() {
    cout << "Enter the element: ";
    int value{};
    cin >> value;
    if(isEmpty()) {
        rear = front = new node(value);
        return;
    } else {
        rear = rear->next = new node(value);
    }
}

void CQ::dequeue() {
    if(isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    node* temp = front->next;
    delete front;
    front = temp;
}

void CQ::traverse() {
    node* temp = front;
    while(temp != nullptr) {
        cout << temp->info << " ";
        temp = temp->next;
    }
}


int main() {
    CQ a;
    int val;
    while(1) {
        cin >> val;
        if(val == 1)
            a.enqueue();
        if(val == 2)
            a.dequeue();
        if(val == 3)
            a.isEmpty();
        if(val == 4)
            break;
        a.traverse();
    }
    return 0;
}