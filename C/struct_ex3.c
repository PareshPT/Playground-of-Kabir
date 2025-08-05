#include <stdio.h>
#include <stdlib.h>

struct Box {
	int x;			//Data Members
	int y;
};

int main() {
	system("clear");
	
	//Here 'p' is Box type pointer variable, which can store address of any Box variable...
	struct Box b1, *p;
	b1.x = 5; b1.y = 7;
	
	p = &b1;
	
	printf("b1.x = %d, b1.y = %d\n", b1.x, b1.y);
	printf("(*p).x = %d, (*p).y = %d\n", (*p).x, (*p).y);
	printf("p->x = %d, p->y = %d\n", p->x, p->y);
		
	return 0;
}
