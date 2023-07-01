#include <stdio.h>
#include <stdlib.h>
int main() {
	int* ptr;
	ptr = (int*) malloc(sizeof(int));
	if(ptr == NULL) printf("Unsuccsessfull.");
	*ptr = 100;
	printf("The integer strored at address %u is %d\n", ptr, *ptr);
	return 0;
}
