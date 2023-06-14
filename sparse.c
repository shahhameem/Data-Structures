#include <stdio.h>
#define ROW 3
#define COL 3
int mat[ROW][COL];
void toSparse();
void toMat(int[][3], int, int);
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
	printf("\n Print :\n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
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
	int a = 0, b = 0, c = 0;
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			if(mat[i][j] != 0){
				sparse[++a][0] = i;
				sparse[++b][1] = j;
				sparse[++c][2] = mat[i][j];
			} 
	print(sparse,value+1, 3);
	toMat(sparse,value+1, 3);
}
void toMat(int spr[][3], int r, int c) {
	int newMat[r][c] = {0}, i, j;
	for(i = 0; i < ROw; i++){
		for(j = 0; j < COL; j++) {
			newMat	
		}
	}
}
