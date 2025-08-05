#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class Person {
	protected:
		char name[50];			//String
		int age;
	
	public:
		void display() {
			cout<<name<<" "<<age<<endl;
		}
}

class Student: public Person {
	private:
		int marks;
		
	public:
		void displayAll() {
			cout<<name<<" "<<age<<" "<<marks<<endl;
		}
}

int main() {
	system("clear");
	
	return 0;
}
