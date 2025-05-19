#pragma once
#define SIZE 2
#include "Package.h"
#include <iostream>
using namespace std;

class Services
{
private:
	string ser_ID;
	string ser_Title;
	Package* pack[SIZE];


public:
	Services();
	Services(string service_id, string service_title);
	void displayDetails();
	~Services();

};

