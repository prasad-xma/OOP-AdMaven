#include<iostream>
#include "Package.h"
#include"Services.h"
#include<cstring>
using namespace std;

Package::Package() {
	//strcpy_s(pack_ID, "");
	//strcpy_s(packName, "");
	pack_ID = "";
	packName = "";
	price = 0;

}
Package::Package(string p_id, string p_name, double p_price)
{
	//strcpy_s(pack_ID, p_id);
	//strcpy_s(packName, p_name);
	pack_ID = p_id;
	packName = p_name;
	price = p_price;
}
void Package::displayDetails() {
	cout << pack_ID << endl << packName << endl << price << endl;
}
Package::~Package() {

}