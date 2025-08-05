#include <stdio.h>
#include <stdlib.h>

//int sum() <=> sum()
sum(int x, int y) {
	return x + y;
}

int main() {
	system("clear");
	
	//sum();
	int res = sum(4, 5);
	printf("res = %d", res);
		
	return 0;
}
