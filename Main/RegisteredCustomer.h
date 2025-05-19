#pragma once
#include <iostream>
#include "User.h"
#include "Feedback.h"
#include "Appointment.h"
#include "Payment.h"
#include "Orders.h"
#define SIZE 2
using namespace std;

class RegisteredCustomer : public User
{
private:
	string user_ID;
	string name;
	string phoneNO;

	Feedback* feedback[SIZE];
	Appointment* appoint[SIZE];
	Payment* pay[SIZE];
	Orders* ord[SIZE];

public:
	RegisteredCustomer();
	RegisteredCustomer(string Pemail, string pass, string Uuser_ID, string Uname, string UphoneNO);

	void displayDetails();
	void checkServices();
	void CheckPackages();
	void makeOrders();
	void cancelOrders();
	void makeAppoinments();
	void cancelAppointments();
	void giveFeedback();
	void editProfile();

	//composition with Feedback class
	void giveFeedback(string Pfeedback_ID, string PuserName, int Prate, string Pdescription);
	void displayFeddback();

	//composition with Appointment class
	void makeAppoinments(string appID, string pdate, string ptime, string ap_des);
	void displayAppDetails();

	//Composition with Payment class
	void makePayment(string payID, string payType, string amt, string payDate, int cardNO, int cvc);
	void displayPaymentDetails();

	//Composition with Order class
	void makeOrders(string orID);
	void displayOrderDetails();

	~RegisteredCustomer();
};

