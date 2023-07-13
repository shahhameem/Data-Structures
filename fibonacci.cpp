#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void generateFibonacci(int n)
{
    cout << "The Fibonacci series up to " << n << " is: ";
    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    generateFibonacci(num);
    cout << endl;
    return 0;
}