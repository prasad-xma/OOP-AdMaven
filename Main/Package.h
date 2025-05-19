#pragma once
#include <iostream>
using namespace std;

class Package
{
private:
	string pack_ID;
	string packName;
	double price;

public:
	Package();
	Package(string p_id, string p_name, double p_price);
	void displayDetails();
	~Package();


};

