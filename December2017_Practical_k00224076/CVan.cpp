#include "CVan.h"

using namespace std;


CVan::CVan():CVehicle()
{
	m_capacity = 0;
	m_towbar = false;
}

CVan::CVan(string cusname,string cusaddress, string cusnumber, string cuscreditcard, string vecmake, string vecmodel, string vecregno, bool rented, int capacity, bool towbar) :CVehicle(cusname, cusaddress, cusnumber, cuscreditcard, vecmake, vecmodel, vecregno, rented)
{
	m_capacity = capacity;
	m_towbar = towbar;
}
int CVan::getCap()
{
	return m_capacity;
}

string CVan::getTow()
{
	if (m_towbar == true)
	{
		return "Yes";
	}
	else if (m_towbar == false)
	{
		return "No";
	}
}

//CVan::~CVan()
//{
//}
