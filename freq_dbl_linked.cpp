#include <iostream>
#include "DDL.h"

void freq(DoublyLinkedList<int> list) {
    Node<int>* temp = list.head;
    
    while (temp != nullptr) {
        Node<int>* current = temp;
        int count = 1;
        int flag = 0;

        // Check previous occurrences
        Node<int>* previous = current->prev;
        while (previous != nullptr) {
            if (previous->data == temp->data) {
                flag = 1;
                break;
            }
            previous = previous->prev;
        }
        
        if (flag == 1) {
            temp = temp->next;
            continue;
        }

        while (current->next != nullptr) {
            current = current->next;
            
            if (temp->data == current->data) {
                count++;
            }
        }
        
        std::cout << temp->data << " is present " << count << " times in the list" << std::endl;
        temp = temp->next;
    }
}



int main()
{
    DoublyLinkedList<int> l1;
    l1.create();
    freq(l1);
    return 0;
}