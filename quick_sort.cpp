#include<iostream>

void swap(int& x, int& y) {
    int temp = y;
    y = x;
    x = temp;
}

int partition(int A[], int low, int high) {
    int pivot = A[high];
    int i = (low - 1);
    for(int j = low; j < high; j++) {
        if (A[j] <= pivot){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    return (i + 1);
}

void quicksort(int ARR[], int low, int high) {
    if(low < high) {
        int p = partition(ARR, low, high);
        quicksort(ARR, low, p - 1);
        quicksort(ARR, p + 1, high);
    }
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {3, 5, 2, 9, 1, 0, 4, 7, 6};
    int high = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, high - 1);
    display(arr, high);
    return 0;
}