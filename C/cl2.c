#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	int x = atoi(argv[1]);
	int y = atoi(argv[3]);
	char *operation = argv[2];
	
	float res = 0;
	
	if(strcmp(operation, "+") == 0) {
		res = x + y;
	}
	else if(strcmp(operation, "-") == 0) {
		res = x - y;
	}
	
	printf("Res = %f\n", res);
	return res;	
}
