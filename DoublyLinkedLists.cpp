#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

void print(Node* n) {
    while (n != NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

void printRev(Node* n) {
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->prev;
    }
}


int main()
{
    Node* head = new Node();
    Node* first = new Node();
    head->prev = NULL;
    head->data = 10;
    head->next = first;
    first->prev = head;
    first->data = 20;
    first->next = NULL;

    Node* tail = first;
    print(head);
    printRev(tail);
    system("pause>0");
}