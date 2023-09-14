#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selection_sort(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        int minimum = i;
        for(int j = i; j < size; j++){
            if(arr[j] < minimum)
                minimum = j;
        swap(&arr[i], &arr[j]);
        }
    }
}

int main() {
    int arr[] = {8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    display(arr, n);
    return 0;
}