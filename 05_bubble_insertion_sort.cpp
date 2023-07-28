#include <iostream>
using namespace std;
#define MAX 100
int n;
void swap(int &x, int &y)
{
	int temp = y;
	y = x;
	x = temp;
}
void bsort(int arr[])
{
	for (int i = 0; i < n - 1; ++i)
	{
		for(int j = 0; j < n - i - 1; ++j)
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
	}
}
void isort(int arr[])
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(arr[j] < arr[j - 1])
				swap(arr[j], arr[j-1]);
		}
	}
}
void read(int arr[])
{
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
}
void print(int arr[])
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << "	";
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int arr[MAX];
	//cout << "Enter the number of elements";
	cin >> n;
	//cout << "Enter the elements";
	read(arr);
	isort(arr);
	print(arr);
	return 0;
}