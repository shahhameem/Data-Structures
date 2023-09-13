#include <iostream>

void print(int A[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << A[i] << "  ";
    }
    std::cout << std::endl;
    return;
}

void swap(int &x, int &y) {
    int temp = x;
    y = x;
    x = temp;
    return;
}

int main()
{
    int arr[] = {2, 5, 6, 1, 0, 3, 4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << n << std::endl;
    int i, j, temp;
    for(i = 1; i < n; i++) {
        j = i - 1;
        temp = arr[i];
        while(arr[j] > temp && j > -1) {
            arr[j+1] = arr[j];
            --j;   
        }
        arr[j+1] = temp;
    }
    print(arr, n);
    return 0;
}