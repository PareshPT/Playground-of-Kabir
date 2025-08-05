#include <stdio.h>
#include <stdlib.h>

void sqr(int *p) {
	*p = *p * *p;
}

int main() {
	system("clear");
	int x = 10;
	sqr(&x);
	printf("x = %d", x);
		
	return 0;
}
