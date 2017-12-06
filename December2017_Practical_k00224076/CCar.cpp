#include "CCar.h"
using namespace std;



CCar::CCar() :CVehicle()
{
	m_numdoors = 0;
	m_auto = false;
	m_convertible = false;
}

CCar::CCar(string cusname,string cusaddress, string cusnumber, string cuscreditcard, string vecmake, string vecmodel, string vecregno,bool rented, int numdoors, bool isauto, bool convertible): CVehicle(cusname, cusaddress, cusnumber, cuscreditcard,vecmake, vecmodel, vecregno, rented)
{
	m_numdoors = numdoors;
	m_auto = isauto;
	m_convertible = convertible;
}
int CCar::getNumdoors()
{
	return m_numdoors;
}

string CCar::getAuto()
{
	if (m_auto == true)
	{
		return "Yes";
	}
	else if (m_auto == false)
	{
		return "No";
	}
}


bool CCar::getConvertible()
{
	return m_convertible;
}

//CCar::~CCar()
//{
//}
