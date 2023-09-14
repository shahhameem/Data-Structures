#include <iostream>

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j < high; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {1,3,5,7,8,9,2,0,6};
    int high = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    quicksort(arr, low, high - 1);
    for(int i = 0; i < high; i++)
        std::cout << arr[i] << "    ";
    std::cout << std::endl;
    return 0;
}