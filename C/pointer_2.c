#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 5, y = 10;
	system("clear");
	
	printf("&x = %lu\n", (unsigned long)&x);
	printf("&y = %lu\n", (unsigned long)&y);
	
	return 0;
}
