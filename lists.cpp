#include <list>
#include <iostream>
using namespace std;

int main() 
{
    list<int> myList{1, 2, 4};
    myList.reverse();
    for(auto &i : myList)
        cout << i << "  ";
    return 0;
}