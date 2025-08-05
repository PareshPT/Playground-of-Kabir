#include <stdio.h>
#include <stdlib.h>

//int sum() <=> sum()
sum(float x, float y) {
	return x + y;
}

int main() {
	system("clear");
	
	//sum();
	int res = sum(4.2, 0.5);
	printf("res = %f", res);
		
	return 0;
}
