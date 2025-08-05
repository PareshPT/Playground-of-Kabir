#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Runtime Polymorphism
class Shape {
	public:
		virtual float area() {
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
		
		//Overriding
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
		
		//Overriding
		float area() {
			return 3.14159 * radius * radius;
		}		
};

class Line: public Shape {
	private:
		float len;
		
	public:
		Line() {
			len = 0;
		}
		Line(float l) {
			len = l;
		}
};


int main() {
	system("clear");
	Circle circle1(4);
	Rectangle rect1(4, 6);
	Line line1(5);
	
	Shape *shape1;				//shape1 can hold address of any Shape object or address of any Dervied class object
	
	shape1 = &circle1;
	cout<<"Area: "<<shape1->area()<<endl;			//50.2654
	
	shape1 = &rect1;
	cout<<"Area: "<<shape1->area()<<endl;			//24
	
	shape1 = &line1;
	cout<<"Area: "<<shape1->area()<<endl;			//0
	
	return 0;
}
