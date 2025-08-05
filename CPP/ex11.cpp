#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Box {
	private:
		int x;
		int y;
		
	public:
		void setXY(int a, int b) {
			x = a;
			y = b;
		}
		
		void getXY() {
			cout << "Enter x: " << endl;
			cin >> x;
			cout << "Enter y: " << endl;
			cin >> y;
		}
		
		void showXY() {
			cout << x << " " << y << endl;
		}
};


int main() {
	system("clear");
	
	Box b1, b2;
	b1.getXY();
	
	b2.setXY(5, 8);
	
	b1.showXY();
	b2.showXY();
	
	return 0;
}
