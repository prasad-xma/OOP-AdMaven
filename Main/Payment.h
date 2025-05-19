#pragma once
#include <iostream>
using namespace std;

class Payment
{
private:
	string pay_ID;
	string pay_type;
	string amount;
	string pay_date;
	int card_NO;
	int CVC;

public:
	Payment();
	Payment(string payID, string payType, string amt, string payDate, int cardNO, int cvc);
	void displayPayDetails();
	~Payment();
};

