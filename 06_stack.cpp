#include <iostream>
using namespace std;

template <class T, int SIZE>
class Stack
{
    private:
        T array[SIZE];
        int top;
    public:
        Stack() {top = -1;}
bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == SIZE - 1;
}

T pop()
{
    if(isEmpty()){
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        return array[top--];
    }
}

T peek()
{
     if (isEmpty()) {
            cout << "\nStack is empty." << endl;
            return -1;
        }
    return array[top];
}

void push(T value)
{
    if(isFull())
    {
        cout << "Stack Overflow" << endl;
        return;
    } else {
        array[++top] = value;
        cout << "\nPushed Successfully." << endl;
    }
}
};

int main()
{
    Stack <int, 5> s1;
    int value;
    while(1)
    {
        short key;
        cout << "\nEnter 1. To Push 2. To Pop 3.Check Empty 4. Check Full 5. Peek 6. Exit : ";
        cin >> key;
        switch(key)
        {
            case 1: cout << "\nEnter the value : "; cin >> value; s1.push(value); break;
            case 2: cout << s1.pop() << " popped."; break;
            case 3: cout << (s1.isEmpty() ? "Yes" : "No") << endl; break;
            case 4: cout << (s1.isFull()? "Yes" : "No") << endl; break;
            case 5: cout << s1.peek() << endl; break;
            case 6 : return 0;
        }
    }
}