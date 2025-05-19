#include "Report.h"
#include <iostream>
using namespace std;

Report::Report() {
	rep_ID = "";
	repDate = "";
	month_amt = 0;
}

Report::Report(string repID, string repD, double mamt) {
	rep_ID = repID;
	repDate = repD;
	month_amt = mamt;
}

void Report::displayReport() {
	cout << rep_ID << endl << repDate << endl << month_amt << endl;
}

Report::~Report() {

}