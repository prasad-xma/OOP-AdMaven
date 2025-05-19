#pragma once
#include "User.h"
#include <iostream>
using namespace std;

class SystemAdmin : public User
{
private:
	string adminID;

public:
	//SystemAdmin();
	SystemAdmin(string Pemail, string pass, string PadminID);
	void displayDetails();
	void managerCustomers();
	void manageConsultant();
	void manageContCreator();
	void manageFeedback();
	void updateService();
	~SystemAdmin();
};


