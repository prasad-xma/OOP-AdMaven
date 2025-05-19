#include "Services.h"
#include "Package.h"
#include<iostream>
#include<cstring>
using namespace std;

Services::Services()
{
	//strcpy_s(ser_ID, "");
	//strcpy_s(ser_Title, "");
	ser_ID = "";
	ser_Title = "";

}
Services::Services(string service_id, string service_title)
{
	//strcpy_s(ser_ID, service_id);
	//strcpy_s(ser_Title, service_title);

	ser_ID = service_id;
	ser_Title = service_title;

}
void Services::displayDetails()
{
	cout << ser_ID << endl << ser_Title << endl;
}
Services::~Services() {

}