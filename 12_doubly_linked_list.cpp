#include <iostream>
#include "DDL.h"
using namespace std;


int main() {
    DoublyLinkedList<float> myList;
	while(1) {
		int key, num;
		cout << "Enter 0 to create List 1 to insert 2 to print and 3 to reverse print 4 to delete and 5 to quite 6 to insert at front" << endl;
		cin >> key;
		switch(key) {
            case 6: cout << "Enter : "; cin >> num; myList.insertFront(num); break;
            case 0: myList.create(); break;
			case 1: cout << "Enter : "; cin >> num; myList.insertEnd(num); break;
			case 2: myList.display(); break;
			case 3: myList.printR(); break;
			case 4: myList.del(); break;
			case 5: exit(0);
			default : cout << "404, ERR" << endl;
		}
	}
	return 0;
}

