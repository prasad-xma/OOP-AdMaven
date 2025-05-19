#include "Staff.h"
#include<iostream>
#include<cstring>
using namespace std;

Staff::Staff() {
	//strcpy_s(Name, "");
	Age = 0;
	Name = "";
	Contact_no = "";
	//strcpy_s(Contact_no, "");
}
Staff::Staff(string cname, int cage, string ccontact) {

	//strcpy_s(Name, cname);
	Name = cname;
	Age = cage;
	Contact_no = ccontact;
	//strcpy_s(Contact_no, ccontact);
}
void Staff::displayDetails() {
	cout << Name << endl << Age << endl << Contact_no << endl;
}

Staff::~Staff() {

}