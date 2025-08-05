#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Employee {
	char name[50];
	int age;
	int salary;
};

void inputEmployee(struct Employee *pe) {
	cout<<"Enter Name: ";
	cin>>pe->name;
	cout<<"Enter Age: ";
	cin>>pe->age;
	cout<<"Enter Salary: ";
	cin>>pe->salary;
}

void outputEmployee(struct Employee emp) {
	cout<<emp.name<<" "<<emp.age<<" "<<emp.salary<<endl;
}


int main() {
	system("clear");
	
	struct Employee emp1;
	inputEmployee(&emp1);
	outputEmployee(emp1);
			
	return 0;
}
