#include <iostream>
#define MAX_SIZE 50

int arr[MAX_SIZE][MAX_SIZE];
int row, col;

void input() {
   // cout << "Enter the rows and cols :" << ends;
   std::cin >> row >> col;
   // cout << "Enter the elements :";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
           std::cin >> arr[i][j];
}
void read() {
    std::cout << "The array you entered is :" << std::endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            std::cout << arr[i][j] << "\t";
        std::cout << std::endl;
    }
    std::cout << "\n";
}
void transpose(){
    int trans[col][row];
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            trans[col][row] = arr[row][col];

    
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++)
            std::cout << trans[i][j] << "\t";
        std::cout << std::endl;
    }
}

int main(void) {  

    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

    input();
    read();
    transpose();
   // add_and_sub();
    //mult();
    return 0;
}