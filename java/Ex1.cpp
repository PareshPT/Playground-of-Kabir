#include <iostream>

class Shape {
	private:
		int x;
		int y;
	
	public:
		/* 
		 * Default Constructor
		 * 1) Constructor is a function having same name as name of class
		 * 2) It return nothing, event not 'void'
		 * 3) It will called automatically by object just after object creation
		 * 4) Usually it is used for initialize object's data member.
		 */		
		Shape() {
			x = 0; y = 0;
		}

		//Parametric Constructor
		//Overloaded Constructor
		Shape(int a, int b) {
			x = a; y = b;
		}
		
		void setValues(int a, int b) {
			x = a;
			y = b;
		}
	
		void getValues() {
			std::cout <<"x: " << x << ", y: " << y << std::endl;
		}	
		
		/*
		 * Destructor
		 * Called automatically just befere object delete and memory will free/delete
		 */
		~Shape() {
			std::cout << "Inside Destructor..." << "x: " << x << ", y: " << y << std::endl;
		}
};

int main() {
	Shape s1(10, 20);		//Default Constructor
	Shape s2(30, 40);	//Parametric Constructor
	
	Shape *shape1 = new Shape(50, 60);			//Default Construtor
	Shape *shape2 = new Shape(60, 70);	//Parametric Construtor
	
	shape1->getValues();
	shape2->getValues();
	
	delete shape1;
	delete shape2;
	
	return 0;
}



