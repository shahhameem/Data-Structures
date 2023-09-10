#ifndef DLL_H
#define DLL_H

template <class T>
class Node {
public:
    T data;
    Node<T>* prev;
    Node<T>* next;
    Node() : next(nullptr), prev(nullptr) {}
};

template <class T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void create()
    {
        T value{};
        std::cout << "Enter the values of the list (-999 to stop) :";
        std::cin >> value;
        while(value != -999)
        {
            Node<T>* newNode = new Node<T>;
            newNode->data = value;
            if(head == nullptr){
                tail = newNode;
                head = newNode;
            }
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            std::cin >> value;
        }
    }

    void insertFront(T value) {
        Node<T>* newNode = new Node<T>;
        newNode->data = value;
        if(head == nullptr) 
            tail = head = newNode;
        else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertEnd(T value) {
        Node<T>* newNode = new Node<T>;
        newNode->data = value;
        tail = newNode;
        if (head == nullptr) {
            head = newNode;
            newNode->prev = nullptr;
        } else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void display() {
	    if(head == nullptr) {
	    	std::cout << "List Empty" << std::endl;
	    	return;
	    }
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
            }
        std::cout << std::endl;
    }


    void printR() {
	    if(tail == nullptr) {
	    	std::cout << "List Empty" << std::endl;
	    	return;
	    }
	    Node<T>* temp = tail;
	    while(temp != nullptr) {
	    	std::cout << temp->data << " ";
	    	temp = temp -> prev;
	    }
	    std::cout << std::endl;
    }

    void del() {
	    while(head != NULL) {  
	    	Node<T>* nextptr = head -> next;
	    	delete head;
	    	head = nextptr;
	    }
	    head = NULL;
	    tail = NULL;
	    return;
    }
};

#endif