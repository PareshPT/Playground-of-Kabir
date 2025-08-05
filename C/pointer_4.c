#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 5, x[] = {10, 15, 20}, b = 25;
	
	system("clear");
	
	printf("&a = %lu\n", (unsigned long)&a);
	printf("&x = %lu\n", (unsigned long)&x);
	printf("&x[0] = %lu\n", (unsigned long)&x[0]);
	printf("&x[1] = %lu\n", (unsigned long)&x[1]);
	printf("&x[2] = %lu\n", (unsigned long)&x[2]);
	printf("&b = %lu\n", (unsigned long)&b);
	
	printf("\n");
	printf("x = %lu\n", (unsigned long)x);
	
	printf("\n");
	printf("*x = %d\n", *x);
	
	printf("\n");
	printf("(x + 0) = %lu\n", (unsigned long) (x + 0));
	printf("*(x + 0) = %d\n", *(x + 0));
	
	printf("\n");
	printf("(x + 1) = %lu\n", (unsigned long) (x + 1));
	printf("*(x + 1) = %d\n", *(x + 1));
	
	printf("\n");
	printf("(x + 2) = %lu\n", (unsigned long) (x + 2));
	printf("*(x + 2) = %d\n", *(x + 2));
	
	printf("\n");
	printf("(x + 3) = %lu\n", (unsigned long) (x + 3));
	printf("*(x + 3) = %d\n", *(x + 3));
	
	printf("\nUsing Loop\n");
	for(int i = 0; i < 3; i++) {
		printf("(x + %d) = %lu\n", i, (unsigned long) (x + i));
		printf("*(x + %d) = %d\n", i, *(x + i));
		printf("x[%d] = %d\n", i, x[i]);
	}
	
	return 0;
}
