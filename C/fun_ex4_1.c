#include <stdio.h>
#include <stdlib.h>

//Call by reference
void swap(int *p, int *q) {
	int aux;
	aux = *p;
	*p = *q;
	*q = aux;
}

int main() {
	system("clear");
	int x = 10, y = 5;
	swap(&x, &y);
	printf("x = %d, y = %d", x, y);
		
	return 0;
}
