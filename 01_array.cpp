#include <iostream>
using namespace std;
#define MAX_SIZE 50

int arr[MAX_SIZE];
int n;

void read() {
    cout << "Enter the size of array :" << endl;
    cin >> n;
    cout << "Enter the elements of array (< 50): " << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}
void display() {
    for(int i = 0; i < n; i++)
        cout << "arr[" <<i << "] = " << arr[i] << endl;
}
void reverse() {
    cout << "Elements in reverse :" << endl;
    for(int i = n - 1; i >= 0; i--)
        cout << "arr[" <<i << "] = " << arr[i] << endl;
}

void search() {
    int beg = 0, end = n - 1, num;
    cout << "Enter the element you want to search : " << ends;
    cin >> num;
    while (beg<=end)
    {
        int mid = (beg + end) / 2;  

        if (arr[mid] == num)
        {
            cout << "The element " << num << " is present at index " <<mid;
            break;
        } else if (num < arr[mid]) {
            end = mid - 1;
        } else {
            beg = beg + 1;
        }
    }
    
}

void replace() {
    int old, New;
    cout << "Enter the element you want to replace and the new element : " << endl;
    cin >> old >> New;
    for(int i = 0; i < n; i++)
        if (arr[i] == old) 
            arr[i] = New;
}

void swap(int * x, int * y) {
    int temp = * y;
    * y = * x;
    *x = temp;
}

void sort() {
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void Delete() {
    int num, index;
    cout << "Enter the element you want to delete :" << endl;
    cin >> num;

    for(int i = 0; i < n; i++)
        if(arr[i] == num) {
            index = i;
            break;
        }
    for(int i = index; i < n - 1; i++)
        arr[i] = arr[i+1];
    n -= 1;
}

void frequency() {
    int num, count = 0;
    cout << "Enter the element who's frequency you want to find :" << endl;
    cin >> num;
    for(int i = 0; i < n; i++) 
        if(arr[i] == num)
            count++;
    cout << "The element " << num << " i s present " << count << " times." << endl;
}

void distinct_frequency() {
    for (int i = 0; i < n; i++) {
        int count = 1;
        int flag = 0;
        for(int j = 0; j < i; j++) 
            if(arr[i] == arr[j]) 
                flag = 1;
        if(flag) continue;
        for(int k = i + 1; k < n; k++)
            if(arr[i] == arr[k])
                count++;
        cout << "The element " << arr[i] << " is present " << count << " times." << endl;
    }
}

int sum() {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << "The sum of the elements of the array is " << sum << endl;
    return sum;
}

void average() {
    cout << "The average of the elements of the array is " << (float) sum()/n << endl;
}

void max() {
    int max = arr[0];
    for(int i = 0; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    cout << "Maximum element is " << max << endl;
}

void min() {
    int min = arr[0];
    for(int i = 0; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    cout << "Maximum element is " << min << endl;
}

void display_distinct() {
    cout << "The distinct elements in the array are :" << endl;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < i; j++) 
            if(arr[i] == arr[j]) 
                flag = 1;
        if(flag) continue;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void display_duplicate() {
    cout << "The duplicate elements in the array are :" << endl;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < i; j++) 
            if(arr[i] == arr[j]) 
                flag = 1;
        if(flag == 0) continue;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insert_missed_sorted() {
    cout << "Enter the missing element: " << endl;
    int missed;
    cin >> missed;
    int i;
    for (i = n - 1; i >= 0 && arr[i] > missed; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = missed;
    n++;
    display();
}


int main(void) {  
    read();
    //display();
    //  reverse();
    // search();
    //replace();
    //insert_missed(); //Not implemented yet
    //sort();
    //insert_missed_sorted(); 
   //Delete();
   //frequency();
   //display_distinct();
   //distinct_frequency();
   //display_duplicate();
   //remove_duplicate(); //Not implemented yet
   //sum();
   //average();
   //max();
   //min();
    return 0;
}