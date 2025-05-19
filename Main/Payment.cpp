#include "Payment.h"
#include "RegisteredCustomer.h"
#include <iostream>

using namespace std;

Payment::Payment() {
	pay_ID = "";
	pay_type = "";
	amount = "";
	pay_date = "";
	card_NO = 0;
	CVC = 0;
}

Payment::Payment(string payID, string payType, string amt, string payDate, int cardNO, int cvc) {
	pay_ID = payID;
	pay_type = payType;
	amount = amt;
	pay_date = payDate;
	card_NO = cardNO;
	CVC = cvc;
}

void Payment::displayPayDetails() {
	cout << pay_ID << endl << pay_type << endl << amount << endl << pay_date << endl << card_NO << endl << CVC << endl;
}

Payment::~Payment() {

}