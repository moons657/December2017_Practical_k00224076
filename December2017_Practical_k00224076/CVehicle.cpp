#pragma once
#include "CVehicle.h"
#include "CCustomer.h"
using namespace std;



CVehicle::CVehicle():CCustomer()
{
	m_vecmake = "";
	m_vecmodel = "";
	m_vecregno = "";
	m_rented = false;
}

CVehicle::CVehicle(string cusname,string cusaddress,string cusnumber, string cuscreditcard, string vecmake, string vecmodel, string vecregno, bool rented):CCustomer(cusname, cusaddress, cusnumber, cuscreditcard)
{
	m_vecmake = vecmake;
	m_vecmodel = vecmodel;
	m_vecregno = vecregno;
	m_rented = rented;
}

string CVehicle::getVecmake()
{
	return m_vecmake;
}
string CVehicle::getVecmodel()
{
	return m_vecmodel;
}
string CVehicle::getVecregno()
{
	return m_vecregno;
}

void CVehicle:: setRent(bool rented)
{
	m_rented = rented;
}

string CVehicle::getRent()
{
	if (m_rented = true)
	{
		return "Yes";
	}
	else if (m_rented == false)
	{
		return "No";
	}
	
}
//CVehicle::~CVehicle()
//{
//}
