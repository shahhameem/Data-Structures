#include <iostream>
#include "SLL.H"

template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    while(!isEmpty()) {
        Node<T> *temp = head->next;
        delete head;
        head = temp;
    }
}

template <typename T>
void SinglyLinkedList<T>::addToHead(T value) {
    head = new Node(value, head);
    if(tail == nullptr)
        tail = head;
}

template <typename T>
void SinglyLinkedList<T>::addToTail(T value) {
    if(tail == nullptr) {
        head = tail = new Node(value);
        return;
    }
    tail->next = new Node(value);
    tail = tail->next;
}

template <typename T>
void SinglyLinkedList<T>::deleteFromHead() {
    if(head == nullptr)
        return;
    Node<T>* temp = head->next;
    delete head;
    head = temp;
}

template <typename T>
void SinglyLinkedList<T>::deleteFromTail() {
    if(tail == nullptr)
        return;
    if(tail == head) {
        delete head;
        tail = head = nullptr;
        return;
    }
    Node<T>* temp = head;
    while(temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = nullptr;
}

template <typename T>
void SinglyLinkedList<T>::deleteNode(T value) {
    if(tail == nullptr)
        return;
    if(head == tail && value == head->info) {
        delete head;
        head = tail = nullptr;
    }
    else if (value == head->info) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    } else {
    Node<T> *pred, *temp = head;
        while(temp->next != nullptr &&temp->next->info != value) {
            temp = temp->next;
        }
        if(temp->next == nullptr) {
            std::cout << "N/A" << std::endl;
            return;
        }
        pred = temp->next;
        temp->next = pred->next;
        delete pred;
    }
}

template <typename T>
void SinglyLinkedList<T>::print() {
    Node<T>* temp = head;
    while(temp != nullptr) {
        std::cout << temp->info << "    ";
        temp = temp->next;
    }
}


int main() {
    SinglyLinkedList<int> a;
    while(1) {
        int num{};
        std::cin>>num;
        if(num == 1)
            a.addToHead(10);
        if(num == 2)
            a.addToTail(-10);
        if(num == 3)
            a.deleteFromHead();
        if(num == 4)
            a.deleteFromTail();
        if(num == 5)
            a.deleteNode(5);
        if(num == 6)
            //a.isInList(2);
        if(num == 7)
            break;
        a.print();
    }
    return 0;
}