#include <stdio.h>
#include <stdlib.h>

int main() {
	int x[3][3], i, j, row, col;
	
	system("clear");
	
	printf("Enter row (<= 3): ");
	scanf("%d", &row);
	printf("Enter col (<= 3): ");
	scanf("%d", &col);
	
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
	
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			printf("x[%d][%d] = %d  ", i, j, x[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
