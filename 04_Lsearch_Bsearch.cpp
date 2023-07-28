#include <iostream>
using namespace std;
#define MAX_SIZE 100
int n;
const int lsearch(int arr[], int num)
{
	for (int i = 0; i < n; ++i)
		if (arr[i] == num)
			return i;
	return -1;
}

const int bsearch(int arr[], int num)
{
	int beg, mid, end;
	while(beg < end)
	{
		mid = (beg + end) / 2;
		if(num < arr[mid])
			end = mid - 1;
		else if(num > arr[mid])
			beg = mid + 1;
		else 
			return mid;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[MAX_SIZE];
	//cout << "Enter the number of elemetns";
	cin >> n;
	//cout << "Enter the elements (less than 100) :";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	//cout << "Enter the element you want to search :";
	int num{}; cin >> num;
	int loc = bsearch(arr, num);
	if(loc != -1)
		cout << "Element " << num << " is found at " << loc <<endl;
	else 
		cout << "Element " << num << " not found";
	return 0;
}