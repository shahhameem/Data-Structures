#include <iostream>
using namespace std;
#define MAX_SIZE 100
int main(void) {

    int arr[MAX_SIZE];
    int n;
    cout << "Enter the number of elements of array : " << endl;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}