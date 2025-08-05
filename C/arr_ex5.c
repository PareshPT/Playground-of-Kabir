#include <stdio.h>
#include <stdlib.h>

//reverse of array
int main() {
	int x[] = {5, 11, 3, 7, 9}, n = 5, i;
	
	system("clear");
	
	for(i = 0; i < n / 2; i++) {
		//swap i with n - i - 1
		int temp = x[i];
		x[i] = x[n-i-1];
		x[n-i-1] = temp;
	}
	
	printf("\nReverse Array: \n");
	
	for(i=0; i < n; i++) {
		printf("%d ", x[i]);
	}
	
	return 0;
}
