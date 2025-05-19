#include "Orders.h"
#include "RegisteredCustomer.h"
#include <iostream>
using namespace std;

Orders::Orders() {
	order_ID = "";
}

Orders::Orders(string orID) {
	order_ID = orID;
}

void Orders::displayOrder() {
	cout << order_ID << endl;
}

Orders::~Orders() {

}
