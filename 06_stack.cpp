#include "STACK.H"

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