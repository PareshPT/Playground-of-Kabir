#include <stdio.h>
#include <stdlib.h>

int main() {
	int x[10], i, n;
	
	system("clear");
	
	printf("Enter n (<= 10): ");
	scanf("%d", &n);
	
	for(i=0; i < n; i++) {
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	
	for(i=0; i < n; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	
	return 0;
}
