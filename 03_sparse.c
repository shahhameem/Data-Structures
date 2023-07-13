#include <stdio.h>
#define ROW 3
#define COL 3
int mat[ROW][COL];
void toSparse();
void toMat(int[][3], int);
void print(int[][3], int, int);
int main() {
	int i, j;
	printf("Enter the elements one by one :");
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			scanf("%d", &mat[i][j]);
	print(mat, ROW, COL);
	toSparse();
	return 0;
}
void print(int arr[][3], int r, int c) {
	int i, j;
	printf("Print :\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void toSparse() {
	int value = 0, i, j;
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			if(mat[i][j] != 0)
				value++;
	printf("The number of non zero values are : %d\n", value);
	int sparse[value + 1][3];
	sparse[0][0] = ROW;
	sparse[0][1] = COL;
	sparse[0][2] = value;
	int index = 1;
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			if(mat[i][j] != 0){
				sparse[index][0] = i;
				sparse[index][1] = j;
				sparse[index][2] = mat[i][j];
				index++;
			} 
	print(sparse,value+1, 3);
	toMat(sparse, value);
}
void toMat(int spr[][3], int value) {
	int newMat[ROW] [COL] = {0};
	for(int i = 1; i <= value; i++){
			newMat[spr[i][0]][spr[i][1]]  = spr[i][2];
	}
	printf("The new matrix created is :-\n");
	print(newMat, ROW, COL);
}
