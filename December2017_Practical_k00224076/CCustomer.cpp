#include "CCustomer.h"



CCustomer::CCustomer()
{
	m_cusname = "";
	m_cusnumber = "";
	m_cusaddress = "";
	m_cuscreditcard = "";
}

CCustomer::CCustomer(string cusname, string cusnumber, string cusaddress, string cuscreditcard)
{
	m_cusname = cusname;
	m_cusnumber = cusnumber;
	m_cusaddress = cusaddress;
	m_cuscreditcard = cuscreditcard;
}


string CCustomer:: getCusname()
{
	return m_cusname;
}
string CCustomer::getCusnumber()
{
	return m_cusnumber;
}
string CCustomer::getCusaddress()
{
	return m_cusaddress;
}
string CCustomer::getCuscreditcard()
{
	return m_cuscreditcard;
}

void CCustomer::setCusname(string cusname)
{
	m_cusname = cusname;
}
void CCustomer::setCusnumber(string cusnumber)
{
	m_cusnumber = cusnumber;
}
void CCustomer::setCusaddress(string cusaddress)
{
	m_cusaddress = cusaddress;
}
void CCustomer::setCuscreditcard(string cuscreditcard)
{
	m_cuscreditcard = cuscreditcard;
}


//CCustomer::~CCustomer()
//{
//}
