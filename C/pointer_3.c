#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 5;
	int *p;
	
	system("clear");
	
	p = &x;
	
	printf("&x = %lu\n", (unsigned long)&x);
	printf("&p = %lu\n", (unsigned long)&p);
	printf("p = %lu\n", (unsigned long)p);
	printf("*p = %d\n", *p);
	
	return 0;
}
