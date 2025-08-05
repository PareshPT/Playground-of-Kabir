#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class Shape {
	public:
		float area() {
			return 0;			
		}
};

class Rectangle: public Shape {
	private:
		float h;
		float w;
		
	public:
		Rectangle() {
			h = 0;
			w = 0;
		}
		Rectangle(float a, float b) {
			h = a;
			w = b;
		}
		float area() {
			return h * w;
		}		
};

class Circle: public Shape {
	private:
		float radius;
		
	public:
		Circle() {
			radius = 0;
		}
		Circle(float r) {
			radius = r;
		}
		float area() {
			return 3.14159 * radius * radius;
		}		
};


int main() {
	system("clear");
	Circle circle1(4);
	Rectangle rect1(4, 6);
	
	Shape *shape1;				//shape1 can hold address of any Shape object or address of any Dervied class object
	
	shape1 = &circle1;
	cout<<"Area: "<<shape1->area()<<endl;			//0
	
	shape1 = &rect1;
	cout<<"Area: "<<shape1->area()<<endl;			//0
	
	return 0;
}
