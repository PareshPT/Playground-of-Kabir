#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
	if(n == 1) {
		return 1;	
	}
	else {
		int res = n * fact(n -1);
		return res;
	}
}

int main() {
	system("clear");
	int n = 5;
	int res = fact(n);
	printf("fact(%d) = %d", n, res);
		
	return 0;
}
