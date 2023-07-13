#include <iostream>
using namespace std;
template <class T>
class stack{

    private:
        struct node{
            T data;
            node* next;
        };
        int top;
        node* head;
    public:
        stack() {
            top = -1;
            head = NULL;
        }
        bool isEmpty()
        {
            return head == NULL;
        }  

        T pop()
        {
            if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return -1;
        }else {
                T popped = head->data;
                node* temp = head->next;
                head->next = head->next->next;
                delete temp;
                return popped;
         }
        }

        T peek()
        {
             if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return head->data;
        }   

        void push(T value)
        {
            node* newnode = new node;
            newnode->data = value;
            newnode->next = NULL;        
            if(head == NULL)
                head = newnode;
            else{
                node* temp = head;
                while(temp->next != NULL){
                        temp = temp->next;
                    }temp->next = newnode;
            }   
        }
};

int main(int argc, char** argv){
    stack<int>  s1;
    int value;
    while(1)
    {
        short key;
        cout << "\nEnter 1. To Push 2. To Pop 3.Check Empty 4. Peek 5. Exit :" << endl;
        cin >> key;
        switch(key)
        {
            case 1 : cout << "\nEnter the value : "; cin >> value; s1.push(value); break;
            case 2:
                value = s1.pop();
                if (value != -1)
                    cout << value << " popped." << endl;
                break;
            case 3: cout << (s1.isEmpty() ? "Yes" : "No") << endl; break;
            case 4: if(s1.peek() != -1)cout << s1.peek() << endl; break;
            case 5 : return 0;
        }
    }
    return 0;
}