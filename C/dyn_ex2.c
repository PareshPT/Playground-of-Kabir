#include <stdio.h>
#include <stdlib.h>

int main() {
	system("clear");
	
	int *p = (int *) malloc(sizeof(int));		//malloc return void * and we are using int *; we need to cast void * to int *
	/*
		int *p;
		p = (int *) malloc(sizeof(int));
	*/
	*p = 100;
	printf("*p = %d\n", *p);
	free(p);
		
	return 0;
}
