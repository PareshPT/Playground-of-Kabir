#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Encapsulate
struct Employee {
	// Data Member (Attributes)
	char name[50];
	int age;
	int salary;


	// Member Functions (Methods/Functions)
	void input() {
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Age: ";
		cin>>age;
		cout<<"Enter Salary: ";
		cin>>salary;
	}
	
	void output() {
		cout<<name<<" "<<age<<" "<<salary<<endl;
	}
};


int main() {
	system("clear");
	
	struct Employee emp1;
	emp1.input();
	emp1.output();
			
	return 0;
}
