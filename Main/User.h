#pragma once
#include <iostream>
using namespace std;

class User
{
protected:
	string email;
	string password;

public:
	User();
	User(string Pemail, string pass);
	void displayDetails();
	void login();
	void validateUser();
	~User(); 
};

