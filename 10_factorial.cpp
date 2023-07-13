#include <iostream>
using namespace std;

int fact(int num)
{
    if(num == 1)
    return num;

    return num * fact(num - 1);
}

int main()
{
    cout << "Enter the number :";
    int num;
    cin >> num;
    cout << "Factoria of the number = " << fact(num) << endl;
    return 0;
}