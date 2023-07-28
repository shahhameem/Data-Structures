#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Function to add a new node to the circular linked list
    void append(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            head->next = head; // Circular link to itself
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head; // Circular link to the head
        }
    }

    // Function to display the elements of the circular linked list
    void display() {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << "Head" << std::endl;
    }
};

int main() {
    CircularLinkedList cll;

    // Appending elements to the circular linked list
    cll.append(1);
    cll.append(2);
    cll.append(3);
    cll.append(4);

    // Displaying the circular linked list
    cll.display();

    return 0;
}
