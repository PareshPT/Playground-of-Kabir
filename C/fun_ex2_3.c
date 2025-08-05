#include <stdio.h>
#include <stdlib.h>

float sum(float x, float y) {
	return x + y;
}

int main() {
	system("clear");
	
	//sum();
	float res = sum(4.2, 0.5);
	printf("res = %f", res);
		
	return 0;
}
