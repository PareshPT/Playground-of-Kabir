#include <stdio.h>
#include <stdlib.h>

//IMP: Note warning and understand
sum() {
	int x, y;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	
	printf("Sum= %d\n", x + y);
}

int main() {
	system("clear");
	
	int v1 = sum();
	printf("v1 (return value) = %d", v1);
	
	return 0;
}
