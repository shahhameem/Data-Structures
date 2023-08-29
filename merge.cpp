#include <iostream>
using namespace std;
struct node {
    int info;
    node* next;
};

node* create() {
    int num;
    node* newnode = new node;
    cout << "Enter the data (-1 if no next node)";
    cin >> num;
     if(num == -1){
        return nullptr;
     }
    newnode->info = num;
    newnode->next = create();
    return newnode;
}

void print(node* head) {
    if(head == nullptr) {
        cout << "List is empty";
        return;
    }
    while(head != nullptr) {
        cout << head->info<< " ";
        head = head->next;
    }
    cout << endl;
}

void merge(node* first, node* second) {
    while(first->next != nullptr || second->next != nullptr) {
        if(first)
    }
}

int main() {
    node* first = nullptr;
    node* second = nullptr;
    cout << "Creating first list." << endl;
    first = create();
    print(first);
    cout << "Creating second list" << endl;
    second = create();
    print(second);
    node* merged = merge(first, second);
    return 0;
}