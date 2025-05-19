#include "consultant.h"
#include<iostream>
#include<cstring>
#include "Staff.h"
using namespace std;

consultant::consultant() {
	//strcpy_s(cons_ID, "");
	cons_ID = "";
}
consultant::consultant(string consname, int consage, string conscno, string consid) : Staff (consname, consage, conscno)
{
	//strcpy_s(cons_ID, consid);
	cons_ID = consid;
	
}
void consultant::displayDetails() {
	Staff::displayDetails();
	cout << cons_ID << endl;

}

consultant::~consultant() {

}