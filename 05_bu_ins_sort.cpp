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
		int flag = 0;
		for(int j = 0; j < n - i - 1; ++j)
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				flag = 1;
			}
		if(!flag) break;
	}
}

void isort(int A[])
{
 int i,j,x;	
 for(i=1;i<n;i++)
 {
 	j=i-1;
 	x=A[i];
 	while(j>-1 && A[j]>x)
 	{
 		A[j+1]=A[j];
 		j--;
 	}
 	A[j+1]=x;
 }
}

void ssort(int A[])
{
	int i, j, k;
	for(i = 0; i < n - 1; i++)
	{
		for(j = k = i; j < n; ++j)
		{
			if(A[j] < A[i])
				k = j;
		}
		swap(A[j], A[i]);
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
		cout << arr[i] << " ";
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
	ssort(arr);
	print(arr);
	return 0;
}