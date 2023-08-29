#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}
    void insert(int);
    void display();
    //Node* create();
};
    void DoublyLinkedList::insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            newNode->prev = nullptr;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void DoublyLinkedList::display() {
        Node* current = head;
        Node* temp = nullptr;
        cout << "The List is : \n";
        while (current != nullptr) {
            cout << current->data << " ";
        if(current -> next != nullptr)
            temp = current->next;
            current = current->next;
        }
        cout << endl;
    //Reverse traversal
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

// Node* DoublyLinkedList::create() {

// }

int main() {
    DoublyLinkedList myList;
    char exit ='y';
    int key;
    do
    {
        cout << "Enter the numbers for respective operations\n1.Insert item in List.\n2.Print List\n3.Delete Item\n4.Instant Create\n";
        cin >> key;
        switch(key)
        {
            int num;
            case 1: cout << "Enter the item :";
            cin >> num;
            myList.insert(num);
            break;
            case 2: myList.display(); break;
            case 3: //will be implemented soon 
            break;
            case 4:
            //myList.create();
            break;
            default: return 0;
        }
        cout << "Do you want to exit(y/Y) :";
        cin >> exit;
    } while(exit != 'y' && exit !='Y');
    return 0;
}

