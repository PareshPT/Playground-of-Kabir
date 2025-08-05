#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

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
	
	Box *p1 = new Box;
	Box *p2 = new Box;
	
	(*p1).getXY();
	
	(*p2).setXY(5, 8);
	
	(*p1).showXY();
	(*p2).showXY();
	
	delete p1;
	delete p2;
	
	return 0;
}
