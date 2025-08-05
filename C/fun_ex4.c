#include <stdio.h>
#include <stdlib.h>

//Call by value
void swap(int x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
}

int main() {
	system("clear");
	int x = 10, y = 5;
	swap(x, y);
	printf("x = %d, y = %d", x, y);
		
	return 0;
}
