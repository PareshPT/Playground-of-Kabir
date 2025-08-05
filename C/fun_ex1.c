#include <stdio.h>
#include <stdlib.h>

//IMP: Note warning and understand
sum() {
	int x, y;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	
	printf("Sum= %d", x + y);
}

int main() {
	system("clear");
	
	sum();
	
	return 0;
}
