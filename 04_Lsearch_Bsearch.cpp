#include <iostream>
#include "ALGO.H"
using namespace std;
#define MAX_SIZE 100

int main(int argc, char const *argv[])
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	Algo<int> a;
	int arr[MAX_SIZE], n;
	//cout << "Enter the number of elemetns";
	cin >> n;
	//cout << "Enter the elements (less than 100) :";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	//cout << "Enter the element you want to search :";
	int num{}; cin >> num;
	//int loc = a.bsearch(arr, num);
	int loc = a.lsearch(arr, n, num);
	if(loc != -1)
		cout << "Element " << num << " is found at " << loc <<endl;
	else 
		cout << "Element " << num << " not found";
	return 0;
}