#include <iostream>
#include "User.h"
using namespace std;

int main() {

	User* u1 = new User("kamal12@gmail.com", "123km");
	u1->displayDetails();

	return 0;
}