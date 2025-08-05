#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main() {
	system("clear");
	
	FILE *file;
	char buffer[100];
	
//	file = fopen("test.txt", "w");
//	fprintf(file, "Hello World!\n");
//	fclose(file);
	
	file = fopen("test.txt", "r");
	printf("File Pos: %ld\n", ftell(file));
	
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s\n\n", buffer);
    }	

	printf("File Pos: %ld\n", ftell(file));
	fclose(file);
	
	return 0;
}
