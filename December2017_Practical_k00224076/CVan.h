#pragma once
#include "CVehicle.h"

using namespace std;

class CVan : public CVehicle
{
private:

	int m_capacity;
	bool m_towbar;

public:

	CVan();
	CVan::CVan(string cusname, string cusaddress, string cusnumber, string cuscreditcard, string vecmake, string vecmodel, string vecregno, bool rented, int capacity, bool towbar);

	int getCap();
	string getTow();

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

		cout << "Weight capacity: " << getCap() << " Tonnes" << endl;
		cout << "Does can have a tow bar: " << getTow() << endl;
	}
	
	
	//~CVan();
};

