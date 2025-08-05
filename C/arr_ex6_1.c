#include <stdio.h>
#include <stdlib.h>

//transpose & reverse col in 2D array
int main() {
	int x[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int row = 3, col = 3, i, j;
	
	system("clear");
	
    for (int i = 0; i < row; i++) {
        for (int j = i; j < col; j++) {
            // Swap x[i][j] with x[j][i]
            int temp = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = temp;
        }
    }
    
	printf("\nTranspose Array: \n");
	
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			printf("%d  ", x[i][j]);
		}
		printf("\n");
	}
	
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row/2; i++) {
            // Swap x[i][j] with x[N-1-i][j]
            int temp = x[i][j];
            x[i][j] = x[row-1-i][j];
            x[row-1-i][j] = temp;
        }
    }	

	printf("\nTranspose and Reverse col in Array: \n");
	
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			printf("%d  ", x[i][j]);
		}
		printf("\n");
	}
	
		
	return 0;
}
