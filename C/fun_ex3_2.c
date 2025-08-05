#include <stdio.h>
#include <stdlib.h>

void sqr(int x) {
	x = x * x;
}

int main() {
	system("clear");
	int x = 10;
	sqr(x);
	printf("x = %d", x);
		
	return 0;
}
