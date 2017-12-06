#pragma once
#include "CVehicle.h"

using namespace std;

class CCar : public CVehicle
{
private:

	int m_numdoors;
	bool m_auto;
	bool m_convertible;

public:

	CCar();
	CCar(string cusname, string cusaddress, string cusnumber, string cuscreditcard, string vecmake, string vecmodel, string vecregno, bool rented, int numdoors, bool isauto, bool convertible);
	
	int getNumdoors();
	string getAuto();

	bool getConvertible();

	 void printDetails()
	 {
		 cout << "Owner of car: " << getCusname() << endl;
		 cout << "Address of owner: " << getCusaddress() << endl;
		 cout << "Customer phone number: " << getCusnumber() << endl;
		 cout << "Customer credit card number: " << getCuscreditcard() << endl;
		 cout << "Make of car: " << getVecmake() << endl;
		 cout << "Model of car: " << getVecmodel() << endl;
		 cout << "Vehicle registration number: " << getVecregno() << endl;
		 cout << "Is car rented: " << getRent() << endl;

		cout <<"No. of doors: "<< getNumdoors() << endl;
		cout << "Is car a convertible: "<< getConvertible() << endl;
		cout <<"Is car an automatic: "<< getAuto() << endl;
		 
	 }
	
	//~CCar();
};

