#include <stdio.h>
#include <stdlib.h>

//Sum of any `n` natural numbers
int main() {
	int x[10], i, n, sum = 0;
	
	system("clear");
	
	printf("Enter n (<= 10): ");
	scanf("%d", &n);
	
	for(i=0; i < n; i++) {
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
		//sum = sum + x[i];
		sum += x[i];
	}
	
	printf("\n");
	
	for(i=0; i < n; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	
	printf("Sum = %d", sum);
	
	return 0;
}
