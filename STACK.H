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
        return NULL;
    } else {
        return array[top--];
    }
}

T peek()
{
     if (isEmpty()) {
            cout << "\nStack is empty." << endl;
            return NULL;
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
    }
}
};