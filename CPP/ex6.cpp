#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class Rectangle {
	protected:
		int height;
		int width;
	
	public:
		/*
		 * Constructor
		 * ============
		 * 
		 * 1) Construttor is function whilc will call automatically when object will create.
		 * 2) Its name is same as name of class.
		 * 3) No return type, even void.
		 * 4) It is used to initialize data-members.
		 */
		 
		// Default Constructor
		Rectangle() {			
			height = 0;
			width = 0;
		}

		// Parametric Constructor/Overloaded Constructor
		Rectangle(int h1, int w1) {			
			height = h1;
			width = w1;
		}
	
		void display() {
			cout<<height<<" "<<width<<endl;
		}
		
		Rectangle add(Rectangle rec1) {
			Rectangle res;
			res.height = height + rec1.height;
			res.width = width + rec1.width;
			return res;
		}

		Rectangle operator+(Rectangle rec1) {
			Rectangle res;
			res.height = height + rec1.height;
			res.width = width + rec1.width;
			return res;
		}
};

int main() {
	system("clear");
	
	Rectangle r1(2, 3), r2(10, 2), r3;			//r1.Rectangle(2, 3);
	r3 = r1 + r2;			//r3 = r1.operator+(r2);
	//r3 = r1.add(r2);		
	r3.display();
	
	return 0;
}
