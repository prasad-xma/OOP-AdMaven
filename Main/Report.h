#pragma once
#include <iostream>
using namespace std;

class Report
{
private:
	string rep_ID;
	string repDate;
	double month_amt;

public:
	Report();
	Report(string repID, string repD, double mamt);
	void displayReport();
	~Report();
};

