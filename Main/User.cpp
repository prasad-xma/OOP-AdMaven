#include "User.h"
#include <iostream>
using namespace std;

User::User() {
	email = "";
	password = "";
}

User::User(string Pemail, string pass) {
	email = Pemail;
	password = pass;
}

void User::displayDetails() {
	cout << "Email : " << email << endl << "Password: " << password << endl;
}

void User::login() {}

void User::validateUser() {}

User::~User() {

}