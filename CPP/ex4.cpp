#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Encapsulate
class Employee {
	private:
		// Data Member (Attributes)
		char name[50];
		int age;
		int salary;

	public:
		// Member Functions (Methods/Functions)
		void input() {
			cout<<"Enter Name: ";
			cin>>name;
			do {
				cout<<"Enter Age: ";
				cin>>age;
				if(age<=18 || age>=65) {
					cout<<"Invalid Age. Age should be (18-65)"<<endl;
				}
				else {
					break;
				}
			} while(1);
			cout<<"Enter Salary: ";
			cin>>salary;
		}
		
		void output() {
			cout<<name<<" "<<age<<" "<<salary<<endl;
		}
};


int main() {
	system("clear");
	
	Employee emp1;			//emp1 is called 'Object'
	emp1.input();
	emp1.output();
			
	return 0;
}
