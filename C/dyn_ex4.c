#include <stdio.h>
#include <stdlib.h>

int main() {
	system("clear");
	
	int n = 3;
	int *p = (int *) malloc(n * sizeof(int));
	
	*(p + 0) = 4;
	*(p + 1) = 6;
	*(p + 2) = 1;
	
	for(int i=0; i < 3; i++) {
		printf("%d ", *(p + i));
	}
	
	free(p);
			
	return 0;
}
