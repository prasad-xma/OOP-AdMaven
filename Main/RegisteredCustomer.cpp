#include "RegisteredCustomer.h"
#include <iostream>
#include "User.h"
#include "Feedback.h"
#include "Payment.h"
#include "Orders.h"
using namespace std;

RegisteredCustomer::RegisteredCustomer()  {
	user_ID = "";
	name = "";
	phoneNO = "";
}

RegisteredCustomer::RegisteredCustomer(string Pemail, string pass, string Uuser_ID, string Uname, string UphoneNO) : User(Pemail, pass) {
	user_ID = Uuser_ID;
	name = Uname;
	phoneNO = UphoneNO;
}

void RegisteredCustomer::displayDetails() {
	User::displayDetails();
	cout << "UserID: " << user_ID << endl << "Name: " << name << endl << "Phone number: " << phoneNO << endl;
}

void RegisteredCustomer::makeAppoinments() {

}

void RegisteredCustomer::makeOrders() {

}
void RegisteredCustomer::cancelAppointments() {

}
void RegisteredCustomer::cancelOrders() {

}
void RegisteredCustomer::checkServices() {

}
void RegisteredCustomer::CheckPackages() {

}
void RegisteredCustomer::editProfile() {

}
void RegisteredCustomer::giveFeedback() {

}

//Composition with Feedback class
void RegisteredCustomer::giveFeedback(string Pfeedback_ID, string PuserName, int Prate, string Pdescription) {
	feedback[0] = new Feedback(Pfeedback_ID, PuserName, Prate, Pdescription);
}

void RegisteredCustomer::displayFeddback() {
	feedback[0]->ShowFeedback();
}


//composition with Appointment class
void RegisteredCustomer::makeAppoinments(string appID, string pdate, string ptime, string ap_des) {
	appoint[0] = new Appointment(appID, pdate, ptime, ap_des);
	//appoint[1] = new Appointment(appID, pdate, ptime, ap_des);
}


//composition with payment class
void RegisteredCustomer::makePayment(string payID, string payType, string amt, string payDate, int cardNO, int cvc) {
	pay[0] = new Payment(payID, payType, amt, payDate, cardNO, cvc);
}
void RegisteredCustomer::displayPaymentDetails() {
	pay[0]->displayPayDetails();
}


void RegisteredCustomer::displayAppDetails() {
	for (int i = 0; i < 1; i++) {
		appoint[i]->displayApp();
	}
}


void RegisteredCustomer::makeOrders(string orID) {
	ord[0] = new Orders(orID);
}
void RegisteredCustomer::displayOrderDetails() {
	ord[0]->displayOrder();
}




RegisteredCustomer::~RegisteredCustomer() {

}
