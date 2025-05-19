#pragma once
#include "User.h"
//#include "consultant.h"
//#include "Content_Creator.h"

class Staff : public User
{
protected:
	string Name;
	int Age;
	string Contact_no;

public:
	Staff();
	Staff(string cname, int cage, string ccontact);
	void displayDetails();
	~Staff();

};

