#pragma once

#include <string>
using namespace std;

class CCustomer
{
private:
	string m_cusname;
	string m_cusnumber;
	string m_cusaddress;
	string m_cuscreditcard;

public:

	CCustomer();
	CCustomer(string cusname, string cusnumber, string cusaddress, string cuscreditcard);

	string getCusname();
	string getCusnumber();
	string getCusaddress();
	string getCuscreditcard();

	void setCusname(string cusname);
	void setCusnumber(string cusnumber);
	void setCusaddress(string cusaddress);
	void setCuscreditcard(string cuscreditcard);

	//~CCustomer();
};

