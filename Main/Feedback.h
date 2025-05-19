#pragma once
#include <iostream>
using namespace std;

class Feedback
{
private:
	string feedback_ID;
	string userName;
	int rate;
	string description;

public:
	Feedback();
	Feedback(string Pfeedback_ID, string PuserName, int Prate, string Pdescription);
	void ShowFeedback();
	~Feedback();
};

