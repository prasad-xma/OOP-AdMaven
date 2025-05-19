#pragma once
#include <iostream>
using namespace std;

class Orders
{
private:
	string order_ID;

public:	
	Orders();
	Orders(string orID);
	void displayOrder();
	~Orders();
};

