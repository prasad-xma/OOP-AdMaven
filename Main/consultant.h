#pragma once
#include"Staff.h"
#include"Appointment.h"
#include <iostream>
using namespace std;

class consultant : public Staff
{
private:
	string cons_ID;

public:
	consultant();
	consultant(string consname, int consage, string conscno, string consid);

	void displayDetails();
	~consultant();
};

