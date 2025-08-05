#include <stdio.h>
#include <stdlib.h>

int main() {
	system("clear");
	
	int x[3] = [3, 1, 9];
	int *p = x;
	
	for(int i=0; i < 3; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n\n");
	for(int i=0; i < 3; i++) {
		printf("%d ", *(x + i));
	}
			
	return 0;
}
