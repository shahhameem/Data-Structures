#include <iostream>
#include "CLL.H"

template <typename T>
CircularDoublyLinkedList<T>::~CircularDoublyLinkedList() {
    Node<T>* temp = head, *current;
    while(temp->next != head) {
        current = temp->next;
        delete current;
        temp = temp->next;
    }
    head = nullptr;
}

template <typename T>
void CircularDoublyLinkedList<T>::create() {
    int value{};
    do {
        std::cin >> value;
        if(head == nullptr) {
            tail = head = new Node(value, head);
        } else {
            tail = tail->next = new Node(value, head, tail);
        }
    } while(value != -999);
}

template <typename T>
void CircularDoublyLinkedList<T>::print() {
    if(head == nullptr) {
        std::cout << "List Empty." << std::endl;
        return;
    }
    Node<T>* temp = head;
    while(temp->next != head) {
        std::cout << temp->info << "    ";
        temp = temp->next;
    }
    std::cout << "Reverse Print." << std::endl;
    while(temp->prev != head) {
        std::cout << temp->info << "    ";
        temp = temp->prev;
    }
}

template <typename T>
void CircularDoublyLinkedList<T>::insertFront(T value) {
    head = new Node(value, head, tail);
}

void init() {
    CircularDoublyLinkedList<int> c;
    std::cout << "Enter the nodes (-999 to stop): " << std::endl;
    c.create();
    //c.insertFront(5);
    c.print();
}


int main() {
    init();
    return 0;
}