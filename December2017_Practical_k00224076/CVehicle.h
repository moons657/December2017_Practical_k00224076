#pragma once
#include "CCustomer.h"
#include <iostream>

using namespace std;

class CVehicle : public CCustomer
{
protected:

	string m_vecmake;
	string m_vecmodel;
	string m_vecregno;
	bool m_rented;

public:

	CVehicle();
	CVehicle(string cusname,string cusaddress, string cusnumber, string cuscreditcard, string vechmake, string vecmodel, string vecregno, bool rented);

	string getVecmake();
	string getVecmodel();
	string getVecregno();
		
	string getRent();

	void setRent(bool rented);

	virtual void printDetails()=0;


	//~CVehicle();
};

