#include <iostream>
#include "User.h"
#include "SystemAdmin.h"
#include "RegisteredCustomer.h"
#include "Feedback.h"
#include "Orders.h"
#include "Report.h"
#include "Staff.h"
#include "consultant.h"
#include "Content_Creator.h"
#include "Services.h"
#include "Package.h"

using namespace std;

int main() {

	//user details
	User* u1 = new User("kamal12@gmail.com", "123km");
	cout << "User Details:-" << endl;
	u1->displayDetails();

	//admin details
	SystemAdmin* ad1 = new SystemAdmin("admin1@gmail.com", "ad123", "ad01");
	cout << endl << "Admin details :- " << endl;
	ad1->displayDetails();

	//customer details
	RegisteredCustomer* c1 = new RegisteredCustomer("amila@gmail.com", "amila34", "cu001", "Amila_cus", "0772354678");
	cout << "Customer details :- " << endl;
	c1->displayDetails();
	cout << endl;

	//Feedback details
	cout << "Feedback Details :-" << endl;
	RegisteredCustomer* fd1;
	fd1 = new RegisteredCustomer;
	fd1->giveFeedback("FD001", "Chathurya", 4, "Good service");
	fd1->displayFeddback();
	cout << endl;

	//Appointment details
	cout << "Appointment Details :-" << endl;
	RegisteredCustomer* app1;
	app1 = new RegisteredCustomer;
	app1->makeAppoinments("AP01", "2024-05-17", "11:30", "Wants to know some service details");
	app1->displayAppDetails();
	
	RegisteredCustomer* app2;
	app2 = new RegisteredCustomer;
	app2->makeAppoinments("AP02", "2024-05-18", "16:15", "Wants to know some Package details");

	app2->displayAppDetails();
	cout << endl;

	//Payment Deteails
	cout << "Payment Details :-" << endl;
	RegisteredCustomer* py1;
	py1 = new RegisteredCustomer;
	py1->makePayment("Pay01", "VISA", "1700.00", "2024-05-14", 34387, 232);
	py1->displayPaymentDetails();
	cout << endl;

	//Order Details
	cout << "Order Details :-" << endl;
	RegisteredCustomer* or1;
	or1 = new RegisteredCustomer;
	or1->makeOrders("ORD01");
	or1->displayOrderDetails();
	cout << endl;

	//Report Details
	Report* re1 = new Report("REP01", "2024-05-15", 136000.00);
	cout << endl << "Report details :- " << endl;
	re1->displayReport();

	//Staff Details
	Staff* stf1 = new Staff("Ravindu", 17, "0773454343");
	cout << endl << "Staff details :- " << endl;
	stf1->displayDetails();

	//Consultant Deteails
	consultant* cons1 = new consultant("Sahan", 23, "39482798", "CT01");
	cout << endl << "Consultant details :- " << endl;
	cons1->displayDetails();
	
	//Content Creator Details
	Content_Creator* cont1 = new Content_Creator("Sanjaya", 21, "67682798", "CONT01");
	cout << endl << "Content Creator details :- " << endl;
	cont1->displayDetails();

	//Services Ditails
	Services* ser1 = new Services("SER01", "Service Title Here");
	cout << endl << "Service details :- " << endl;
	ser1->displayDetails();

	//Pckages Details
	Package* pac1 = new Package("PC01", "Package Title", 17000.00);
	cout << endl << "Package details :- " << endl;
	pac1->displayDetails();



	return 0;
}