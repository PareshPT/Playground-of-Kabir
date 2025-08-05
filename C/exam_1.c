#include <stdio.h>
#include <stdlib.h>

int main() {
	system("clear");

	int a = '0' == ('1' - 1);
	printf("%d\n", a);

	int b = 12 == (6 + '6');
	printf("%d\n", b);
			
	return 0;
}
