#include <stdio.h>
#include <stdlib.h>

//Sorting of array
int main() {
	int x[] = {5, 11, 3, 7}, n = 4, i, j;
	
	system("clear");
	
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n-i-1; j++) {
            if (x[j] > x[j+1]) {
                // Swap the elements
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
		}		
	}
	
	printf("\n Sorted Array: \n");
	
	for(i=0; i < n; i++) {
		printf("%d ", x[i]);
	}
	
	return 0;
}
