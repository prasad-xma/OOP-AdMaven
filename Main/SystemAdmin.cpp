#include "SystemAdmin.h"
#include "User.h"
#include <iostream>
using namespace std;

SystemAdmin::SystemAdmin(string Pemail, string pass, string PadminID) : User(Pemail, pass) {
	adminID = PadminID;
}

void SystemAdmin::displayDetails() {
	User::displayDetails();
	cout << "Admin ID : " << adminID << endl << endl;
}

void SystemAdmin::manageConsultant() {

}
void SystemAdmin::manageContCreator() {

}
void SystemAdmin::manageFeedback() {

}
void SystemAdmin::managerCustomers() {

}

void SystemAdmin::updateService() {

}

SystemAdmin::~SystemAdmin() {

}
