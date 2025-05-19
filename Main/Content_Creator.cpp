#include "Content_Creator.h"
#include<iostream>
#include<cstring>
using namespace std;

Content_Creator::Content_Creator() {
	//strcpy_s(cont_ID, "");
	cont_ID = "";
}
Content_Creator::Content_Creator(string contname, int contage, string contcno, string contid) : Staff(contname, contage, contcno)
{
	//strcpy_s(cont_ID, contid);
	cont_ID = contid;
}
void Content_Creator::displayDetails() {
	Staff::displayDetails();
	cout << cont_ID << endl;

}

Content_Creator::~Content_Creator() {

}