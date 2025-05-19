#pragma once
#include <iostream>
//#include "RegisteredCustomer.h"
using namespace std;

class Appointment
{
private:
	string app_ID;
	string date;
	string time;
	string app_description;

public:
	Appointment();
	Appointment(string appID, string pdate, string ptime, string ap_des);
	void displayApp();
	~Appointment();
};

