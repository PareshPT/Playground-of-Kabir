#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	int rollno;
	char name[50];
	
	//Anonymous Inner Structure
	struct {
		int house_no;
		char area[100];
		char city[100];
		char state[100];
		char pincode[6];	
	} address;
};

int main() {
	system("clear");
	
	struct Student s1;
	s1.rollno = 1;
	strcpy(s1.name, "John Doe");			//String assignment; s1.name = "John Doe";
	s1.address.house_no = 10;
	strcpy(s1.address.area, "Downstreet");
	strcpy(s1.address.city, "XYZ City");
	strcpy(s1.address.state, "XYZ State");
	strcpy(s1.address.pincode, "4520001");
	
	printf("s1.rollnow = %d\n", s1.rollno);
	printf("s1.name = %s\n", s1.name);
	printf("s1.address.house_no = %d\n", s1.address.house_no);
		
	return 0;
}
