#include "Feedback.h"
#include <iostream>
#include "RegisteredCustomer.h"

using namespace std;

Feedback::Feedback() {
	feedback_ID = "";
	userName = "";
	rate = 0;
	description = "";
}

Feedback::Feedback(string Pfeedback_ID, string PuserName, int Prate, string Pdescription) {
	feedback_ID = Pfeedback_ID;
	userName = PuserName;
	rate = Prate;
	description = Pdescription;
}

void Feedback::ShowFeedback() {
	cout << "Feedback Deteails :-" << endl;
	cout << "FeedbackID : " << feedback_ID << endl << "Customer Name: " << userName << endl;
	cout << "Rate : " << rate << endl << "Description : " << description << endl;
}

Feedback::~Feedback() {

}