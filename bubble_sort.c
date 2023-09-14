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

void bubblesort(int arr[], int size) {
    
    for(int i = 0; i < size - 1; i++) {
        int flag = 0;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[i] > arr[j + 1]){
                swap(&arr[i], &arr[j]);
                flag = 1;
            }
            if(!flag) break;
        }
    }
}

int main() {
    int arr[] = {8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    display(arr, n);
    return 0;
}