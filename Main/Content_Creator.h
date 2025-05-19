#pragma once
#include"Staff.h"
//#include"Orders.h"

class Content_Creator : public Staff
{
private:
	string cont_ID;

public:
	Content_Creator();
	Content_Creator(string contname, int contage, string contcno, string contid);
	void displayDetails();
	~Content_Creator();

};

