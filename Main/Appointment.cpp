#include "Appointment.h"
#include "RegisteredCustomer.h"
#include <iostream>
using namespace std;

Appointment::Appointment() {
	app_ID = "";
	date = "";
	time = "";
	app_description = "";
}

Appointment::Appointment(string appID, string pdate, string ptime, string ap_des) {
	app_ID = appID;
	date = pdate;
	time = ptime;
	app_description = ap_des;
}

void Appointment::displayApp() {
	cout << app_ID << endl << date << endl << time << endl;
	cout << app_description << endl;
}

Appointment::~Appointment() {
	cout << "Deleting appointments" << app_ID << endl;
}