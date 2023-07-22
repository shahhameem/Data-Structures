#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Function to add a new node to the singly linked list
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the elements of the singly linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // YOUR SORTING LOGIC GOES HERE
    void sort() {
        int smallest = head->data;
        if(temp->data <= smallest){
        	temp->next = temp->next->next;
        	
		}
    }
};

int main() {
    SinglyLinkedList sll;

    // Appending elements to the singly linked list
    sll.append(4);
    sll.append(2);
    sll.append(1);
    sll.append(3);

    // Displaying the unsorted singly linked list
    std::cout << "Unsorted Singly Linked List: ";
    sll.display();

    // Sorting the singly linked list
    sll.sort();

    // Displaying the sorted singly linked list
    std::cout << "Sorted Singly Linked List: ";
    sll.display();

    return 0;
}
