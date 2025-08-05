#include <stdio.h>
#include <stdlib.h>

//Here Box is user defined Custom Data Type
struct Box {
	public:				//public is optional for struct
		int x;			//Data Members
		int y;
		
		void show() {
			printf("Box.show() Method...\n");
		}
};

int main() {
	system("clear");
	
	//Here b1, b2 is variable/instance/object of struct Box
	struct Box b1, b2;
	b1.x = 5; b1.y = 7;
	b2.x = 5; b2.y = 7;
	
	printf("b1.x = %d, b1.y = %d\n", b1.x, b1.y);
	printf("b2.x = %d, b2.y = %d\n", b2.x, b2.y);
	
	b1.show();
	b2.show();
		
	return 0;
}
